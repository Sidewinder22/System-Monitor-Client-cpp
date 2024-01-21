set(LIB system-monitor-client-lib)

add_library(${LIB} SHARED
    Application.cpp
)

target_include_directories(${LIB}
    # For the public header files
    PUBLIC
    ${system-monitor-client_SOURCE_DIR}/lib/include

    # For only private header files
    PRIVATE
    ${system-monitor-client_SOURCE_DIR}/lib/src
)
