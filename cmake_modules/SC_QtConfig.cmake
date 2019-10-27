# Qt library config
# So complicated it gets its own file

# Uses the options `SC_QT`, `SC_IDE`, and `SC_USE_QTWEBENGINE`
# Exports the variables `sclang_qt_libs` and `scide_qt_libs`

# TODO maybe can be 5.5 if `NOT SC_USE_QTWEBENGINE`?
set(required_qt_version 5.7)

if(NOT SC_QT)
    # nothing to do
    message(STATUS "Building without Qt features")
    return()
endif()

message(STATUS "Building with Qt features")

if(SC_USE_QTWEBENGINE)
    message(STATUS "Building with QtWebEngine support")
else()
    message(STATUS "Building without QtWebEngine support")
endif()

# sclang libs
set(sclang_qt_libs
    Qt5::Core
    Qt5::Gui
    Qt5::Network
    Qt5::OpenGL
    Qt5::PrintSupport
    Qt5::Qml
    Qt5::Quick
    Qt5::Sql
    Qt5::Svg
    Qt5::Widgets
)
if(SC_USE_QTWEBENGINE)
    list(APPEND sclang_qt_libs Qt5::WebEngineCore Qt5::WebEngineWidgets)
endif()
if(APPLE)
    list(APPEND sclang_qt_libs Qt5::MacExtras)
endif()

# IDE libs
if(SC_IDE)
    set(scide_qt_libs
        Qt5::Concurrent
        Qt5::Core
        Qt5::PrintSupport
        Qt5::Qml
        Qt5::Quick
        Qt5::Sql
    )
    if(SC_USE_QTWEBENGINE)
        list(APPEND scide_qt_libs Qt5::WebChannel Qt5::WebEngineWidgets Qt5::WebSockets)
    endif()
endif()

# merge both lists and strip "Qt5::" to get the list of required components
list(APPEND combined_required_libs ${scide_qt_libs} ${sclang_qt_libs})
list(REMOVE_DUPLICATES combined_required_libs)
foreach(lib IN LISTS combined_required_libs)
    string(SUBSTRING ${lib} 5 -1 substring_lib)
    list(APPEND required_qt_components ${substring_lib})
endforeach()

# also need linguist tools for IDE translations
list(APPEND required_qt_components LinguistTools)

find_package(Qt5 ${required_qt_version} COMPONENTS ${required_qt_components} REQUIRED)

list(APPEND sclang_qt_libs ${MATH_LIBRARY})
