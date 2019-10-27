if(APPLE)
    ###### The user may set the app name, causing a standalone build
    ######	cmake -D standalone:string=MyFabApp ../
    if ("${standalone}" STREQUAL "")
        set(sc_app_bundle_name SuperCollider)
    else()
        # We're building a standalone, change the app name.
        set(sc_app_bundle_name ${standalone})
        message(STATUS "Building sc in STANDALONE mode. App name: " ${standalone})
    endif()

    set(sc_app_resources_dir "${sc_app_bundle_name}/${sc_app_bundle_name}.app/Contents/Resources" CACHE STRING "Installation path for the Resourcedir")
endif(APPLE)
