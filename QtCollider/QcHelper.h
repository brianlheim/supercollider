#pragma once

#include "Common.h"

#include <QColor>
#include <QFont>
#include <QString>
#include <QVariant>

struct QcHelper {
protected:
    QcHelper() {}
    float dummyFloat() const { return 0; }
    int dummyInt() const { return 0; }
    bool dummyBool() const { return false; }
    QString dummyString() const { return QString(); }
    QColor dummyColor() const { return QColor(); }
    QFont dummyFont() const { return QFont(); }
    QVariantList dummyVariantList() const { return QVariantList(); }
};
