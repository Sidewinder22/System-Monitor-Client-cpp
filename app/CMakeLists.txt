set(APP system-monitor-client)
set(LIB system-monitor-client-lib)

add_executable(${APP}
    main.cpp
)

target_link_libraries(${APP}
    PRIVATE
    ${LIB}
)
