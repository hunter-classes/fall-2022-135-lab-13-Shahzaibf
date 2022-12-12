#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A"){
    std::string testcase1;
    testcase1 = printRange(1,5);
    CHECK(testcase1 == "1 2 3 4 5");
    testcase1 = printRange(12,14);
    CHECK(testcase1 == "12 13 14");
}

TEST_CASE("Task B"){
    int x = sumRange(4,18);
    CHECK(x == 165);
    x = sumRange(-4,2);
    CHECK(x == -7);
    x = sumRange(8,10);
    CHECK(x == 27);
}