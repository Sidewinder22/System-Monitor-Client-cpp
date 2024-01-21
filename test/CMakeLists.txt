set(LIB ${PROJECT_NAME}-lib)
set(TEST ${PROJECT_NAME}-tests)

enable_testing()

add_executable(${TEST}
    ApplicationTest.cpp
)

target_link_libraries(${TEST}
    ${LIB}
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${TEST})
