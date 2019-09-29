# Per-generator specific config settings
# Used by CPack, see https://cmake.org/cmake/help/latest/module/CPack.html#variable:CPACK_PROJECT_CONFIG_FILE

# TODO set CPACK_PACKAGE_ICON

if(CPACK_GENERATOR STREQUAL "IFW") # Qt IFW installer
    set(CPACK_IFW_PACKAGE_URL "https://supercollider.github.io")
    if(APPLE)
        set(CPACK_IFW_PACKAGE_ICON icons/SCCube.icns)
    elseif(WIN32)
        set(CPACK_IFW_PACKAGE_ICON icons/sc_ide.ico)
    endif()
    set(CPACK_IFW_PACKAGE_WINDOW_ICON icons/sc_cube_1024x1024.png)
    set(CPACK_IFW_PACKAGE_LOGO icons/sc_cube_1024x1024.png)
    set(CPACK_IFW_PACKAGE_WIZARD_STYLE Modern) # or Mac, Aero, Classic
    set(CPACK_IFW_PACKAGE_NAME SuperCollider)
elseif(CPACK_GENERATOR STREQUAL "WIX") # WiX .msi installer
    # TODO
elseif(CPACK_GENERATOR STREQUAL "NSIS") # Windows NSIS installer
    # TODO
elseif(CPACK_GENERATOR STREQUAL "DragNDrop") # MacOS .dmg
    # TODO
elseif(CPACK_GENERATOR STREQUAL "RPM") # Fedora/red hat .rpm
    # TODO
elseif(CPACK_GENERATOR STREQUAL "DEB") # Debian .deb
    # TODO
endif()
