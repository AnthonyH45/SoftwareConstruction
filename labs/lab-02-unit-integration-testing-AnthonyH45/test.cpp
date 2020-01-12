#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, EmptyString) {
    char* test_val[1];
    test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1, test_val));
}

TEST(EchoTest, whiteSpaces) {
    char* test_val[6];
    test_val[0] = "./c-echo";   
    for (int i = 1; i <= 5; ++i) {
        test_val[i] = "_";
    }
    EXPECT_EQ("_ _ _ _ _", echo(6, test_val));
}

TEST(EchoTest, NoLetters) {
    char* test_val[3];
    test_val[0] = "./c-echo";
    test_val[1] = "1";
    test_val[2] = "3";
    EXPECT_EQ("1 3", echo(3, test_val));
}

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; 
    test_val[0] = "./c-echo"; 
    test_val[1] = "hello"; 
    test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3, test_val));
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
