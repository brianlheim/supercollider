#include "CompletionMenuFactory.hpp"
#include "completion_menu.hpp"

namespace ScIDE {

CompletionMenu* CompletionMenuFactory::forClasses(QWidget* parent, int n, ClassMapIter begin, ClassMapIter end)
{
    auto * menu = new CompletionMenu(parent);
    for (auto it = begin; it != end; ++it) {
        auto *klass = it->second.data();
        menu->addItem( new QStandardItem(klass->name) );
    }

    menu->adapt();
    return menu;
}

CompletionMenu* CompletionMenuFactory::forClassMethods(QWidget* parent, int n, MethodListIter begin, MethodListIter end) {
    auto * menu = new CompletionMenu(parent);
    menu->setCompletionRole(CompletionMenu::CompletionRole);

    QString detail(" [ %1 ]");

    for(auto it = begin; it != end; ++it) {
        QString methodName = (*it)->name.get();

        QStandardItem *item = new QStandardItem();
        item->setText( methodName + detail.arg((*it)->ownerClass->name) );
        item->setData( QVariant::fromValue(*it), CompletionMenu::MethodRole );
        item->setData( methodName, CompletionMenu::CompletionRole );
        menu->addItem(item);
    }

    menu->adapt();
    return menu;
}

CompletionMenu* CompletionMenuFactory::forMethods(QWidget* parent, int n, MethodMapIter begin, MethodMapIter end) {
    CompletionMenu *menu = new CompletionMenu(parent);
    menu->setCompletionRole(CompletionMenu::CompletionRole);

    auto it = begin;
    while (it != end) {
        const auto *method = it->second.data();

        int count = 0;
        auto rangeIt = it;
        while (rangeIt->first == it->first && rangeIt != end) {
            ++rangeIt;
            ++count;
        }

        QStandardItem *item = new QStandardItem();

        QString methodName = method->name.get();
        QString detail(" [ %1 ]");
        if (count == 1) {
            item->setText( methodName + detail.arg(method->ownerClass->name) );
            item->setData( QVariant::fromValue(method), CompletionMenu::MethodRole );
        } else {
            item->setText(methodName + detail.arg(count));
        }

        item->setData(methodName, CompletionMenu::CompletionRole);
        menu->addItem(item);

        it = rangeIt;
    }

    menu->adapt();
    return menu;
}

CompletionMenu* CompletionMenuFactory::forDisambiguation(QWidget* parent, int n, MethodMapIter begin, MethodMapIter end) {
    auto* menu = new CompletionMenu(parent);

    for (auto it = begin; it != end; ++it) {
        const auto* method = it->second.data();
        auto *item = new QStandardItem(method->name + " (" + method->ownerClass->name + ')');
        item->setData( QVariant::fromValue(method), CompletionMenu::MethodRole );
        menu->addItem(item);
    }

    menu->adapt();
    return menu;
}

} // namespace ScIDE
