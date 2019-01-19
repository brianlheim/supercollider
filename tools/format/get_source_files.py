# Get source files in the repo to run clang-format on.
# See --help for usage.
# Brian Heim
# 2018-09-10

from itertools import chain
from sys import stderr
from sys import stdout
import os
import re

SOURCE_DIRS = [
    'QtCollider',
    'SCDoc',
    'common',
    'editors',
    'include',
    'lang',
    'platform',
    'server',
    'testsuite'
    ]

SOURCE_EXTENSIONS = [
    '.c',
    '.cpp',
    '.h',
    '.hpp',
    '.mm' # clang-format can format Obj-C code too
    ]

# files generated by lex, bison; these should not be touched
GENERATED_FILENAME_REGEX = re.compile(r'SCDoc\.tab\.|lang11d_tab|lex\.scdoc\.cpp')

def has_good_ext(path):
    return os.path.splitext(path)[1] in SOURCE_EXTENSIONS

def not_generated_file(path, quiet):
    if GENERATED_FILENAME_REGEX.match(path):
        if not quiet:
            print('Ignoring tool-generated file {}'.format(path), file=stderr)
        return False
    else:
        return True

def get_source_files_in_dir(dir, quiet):
    result = []
    for dirpath, dirnames, filenames in os.walk(dir):
        sources = filter(has_good_ext, filenames)
        good_sources = filter(lambda p: not_generated_file(p, quiet), sources)
        full_good_sources = map(lambda p: os.path.join(dirpath, p), good_sources)
        result.append(list(full_good_sources))

    return chain.from_iterable(result)

def get_source_files(root, quiet):
    full_source_dirs = map(lambda p: os.path.join(root, p), SOURCE_DIRS)
    files = chain.from_iterable(
        map(lambda p: get_source_files_in_dir(p, quiet), full_source_dirs))

    return files

def write_out(files, output):
    try:
        outfile = stdout if not output else open(output, 'w')
    except OSError as e:
        print('Could not open output file: ' + e)
        exit(2)

    for file in files:
        assert os.path.exists(file), "Path should exist: {}".format(file)
        outfile.write(file + '\n')

def parse_args():
    from argparse import ArgumentParser
    ap = ArgumentParser()
    ap.add_argument('-r', '--root', help='Project root. Defaults to current directory', default='.')
    ap.add_argument('-q', '--quiet',
        help='Only print matching files. Normally, ignored source files are printed to stderr',
        action='store_true')
    ap.add_argument('-o', '--output',
        help='Output file. Normally, output is written to stdout')

    args = ap.parse_args()
    return args

def check_root(root):
    # rough check to see if we're in the right directory
    if not os.path.exists(os.path.join(root, SOURCE_DIRS[0])):
        print('Project files not found at given root.')
        exit(1)

if __name__ == "__main__":
    args = parse_args()
    check_root(args.root)
    write_out(get_source_files(args.root, args.quiet), args.output)
