set(LIB ${PROJECT_NAME}-lib)

add_library(${LIB} SHARED
    Application.cpp
)

target_include_directories(${LIB}
    # For the public header files
    PUBLIC
    ${${PROJECT_NAME}_SOURCE_DIR}/lib/include

    # For only private header files
    PRIVATE
    ${${PROJECT_NAME}_SOURCE_DIR}/lib/src
)
