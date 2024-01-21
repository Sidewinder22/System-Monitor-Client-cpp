set(APP ${PROJECT_NAME})
set(LIB ${PROJECT_NAME}-lib)

add_executable(${APP}
    main.cpp
)

target_link_libraries(${APP}
    PRIVATE
    ${LIB}
)
