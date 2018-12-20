#!/usr/bin/env sh
# This script does perform all linting for the repo.
# None of these commands should write anything to stdout; if they do, that indicates a failure.

printf 'Find source files with executable permissions\n' 1>&2
find [^e]* -perm +111 -type f | grep -E '\.(c|cpp|h|hpp|mm|sc|scd|schelp|js|css|html)$'

printf 'Run clang-format based on diff\n' 1>&2
git show --pretty='format:' -U0 | clang-format-diff.py -p1 -style file

printf 'Lint CMake files\n' 1>&2
git show --pretty='format:' --name-only | grep CMakeLists.txt | \
    xargs cmakelint --filter=-linelength 2>/dev/null

printf 'Find trailing whitespace in any file in HelpSource, SCClassLibrary, testsuite, and examples\n' 1>&2
grep -nHrI "\s\+$" HelpSource SCClassLibrary testsuite examples

printf 'Find leading whitespace violations in .sc/.scd files\n' 1>&2
find SCClassLibrary testsuite examples -name '*.sc*' -exec grep -nH "^\s* \+\S" {} \;
