#include <gtest/gtest.h>
#include "Application.hpp"

TEST(ApplicationTest, Test)
{
    Application app;
    EXPECT_TRUE(app.start());
}
