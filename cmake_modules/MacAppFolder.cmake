if(APPLE)
    ###### The user may set the app name, causing a standalone build
    ######	cmake -D standalone:string=MyFabApp ../
    if ("${standalone}" STREQUAL "")
        set(scappbundlename SuperCollider)
    else()
        # We're building a standalone, change the app name.
        set(scappbundlename ${standalone})
        message(STATUS "Building sc in STANDALONE mode. App name: " ${standalone})
    endif()

    set(sc_app_resources_dir "${scappbundlename}/${scappbundlename}.app/Contents/Resources" CACHE STRING "Installation path for the Resourcedir")
endif(APPLE)
