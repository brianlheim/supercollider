/*
    SuperCollider Qt IDE
    http://www.audiosynth.com

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#pragma once

#include "../help_browser.hpp"
#include "../../core/settings/manager.hpp"

#include <tuple>

#include <QObject>
#include <QMap>
#include <QVariant>
#include <QString>
#include <QTextCharFormat>

namespace ScIDE {

/// Exposes IDE functionality to JS in help browser widget via WebChannel
class IDEWebChannelWrapper : public QObject {
    Q_OBJECT;

public:
    IDEWebChannelWrapper(HelpBrowser* browser, Settings::Manager* settings):
        m_browser{browser},
        m_settings{settings}
    {
        connect(settings, SIGNAL(themeChanged()), this, SLOT(postStyle()));
    }

signals:
    void styleChanged(QVariantMap const&);

public slots:
    void evaluateLine()
    {
        m_browser->evaluateSelection(false);
    }

    void postStyle()
    {
        QVariantMap map{};
        insertValue(map, "IDE/editor/blinkDuration");
        insertFormat(map, "class");
        emit styleChanged(map);
    }

private:
    HelpBrowser * const m_browser;
    Settings::Manager const * const m_settings;

    /// Insert a variant value from the given settings key
    void insertValue(QVariantMap& map, QString const& key)
    {
        map[key] = m_settings->value(key);
    }

    /// Insert a QTextCharFormat as JSON object
    void insertFormat(QVariantMap& map, QString const& key)
    {
        auto format = m_settings->getThemeVal(key);
        QVariantMap formatMap{
            { "weight", format.property(QTextFormat::FontWeight) == QFont::Bold },
            { "italic", format.property(QTextFormat::FontItalic) }
        };
        if (format.foreground() != Qt::NoBrush) {
            formatMap["foreground"] = format.foreground().color().name();
        }
        if (format.background() != Qt::NoBrush) {
            formatMap["background"] = format.background().color().name();
        }

        map[QStringLiteral("IDE/editor/theme/%1").arg(key)] = formatMap;
    }

    QString getColor(QString const& key)
    {
        return formatColor(m_settings->getThemeVal(key));
    }

    QString formatColor(QTextCharFormat const& format)
    {
        auto const& color = format.foreground().color();
        return color.name();
    }
};

} // namespace ScIDE

