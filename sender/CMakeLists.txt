file(GLOB COM_SOURCES "../com/*.cpp")
file(GLOB SECOC_SOURCES "../secoc/*.cpp")

add_executable(sender
    main.cpp
    ${COM_SOURCES}
    ${SECOC_SOURCES}
)

include_directories(
    ../com
    ../secoc
    )  