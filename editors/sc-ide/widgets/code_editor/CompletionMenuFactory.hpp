#pragma once

#include "../../core/sc_introspection.hpp"

#include <QWidget>
#include <QList>

namespace ScIDE {

class CompletionMenu;

/**
 * Factory for creating CompletionMenus for autocompleter
 *
 * Each method takes the parent editor, an iterator range, and the max number of ranked suggestions
 * to include.
 */
class CompletionMenuFactory
{
public:
    using ClassMapIter = ScLanguage::ClassMap::const_iterator;
    using MethodListIter = QList<const ScLanguage::Method*>::const_iterator;
    using MethodMapIter = ScLanguage::MethodMap::const_iterator;

    static CompletionMenu* forClasses(QWidget* parent, int n, ClassMapIter begin, ClassMapIter end);
    static CompletionMenu* forClassMethods(QWidget* parent, int n, MethodListIter begin, MethodListIter end);
    static CompletionMenu* forMethods(QWidget* parent, int n, MethodMapIter begin, MethodMapIter end);
    static CompletionMenu* forDisambiguation(QWidget* parent, int n, MethodMapIter begin, MethodMapIter end);
};

} // namespace ScIDE
