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