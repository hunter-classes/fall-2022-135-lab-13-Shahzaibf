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

TEST_CASE("Task C"){
    int size = 5;
    int *arr = new int[size];
    arr[0] = 2;
    arr[1] = -1;
    arr[2] = 5;
    arr[3] = 9;
    arr[4] = 1;
    int sum = sumArray(arr, size);
    CHECK(sum == 16);
    sum = sumArray(arr, 2);
    CHECK(sum == 1);
}

TEST_CASE("Task D"){
    std::string test = "KLMN 8-7-6";
    CHECK(isAlphanumeric(test) == false);
    test = "!!254";
    CHECK(isAlphanumeric(test) == false);
    test = "ABC123";
    CHECK(isAlphanumeric(test) == true);
}

TEST_CASE("Task E"){
    std::string teste;
    teste = "";
    CHECK(nestedParens(teste) == true);
    teste = "(((";
    CHECK(nestedParens(teste) == false);
    teste = "a(b)c";
    CHECK(nestedParens(teste) == false);
}