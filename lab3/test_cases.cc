// This test program uses a test framework supporting TDD and BDD.
// You are not required to use the framework, but encouraged to.
// Code:
// https://github.com/philsquared/Catch.git
// Documentation:
// https://github.com/philsquared/Catch/blob/master/docs/tutorial.md

// You ARE however required to implement all test cases outlined here,
// even if you do it by way of your own function for each case.  You
// are recommended to solve the cases in order, and rerun all tests
// after you modify your code.

// This define lets Catch create the main test program
// (Must be in only one place!)
#include "catch.hpp"
#include "List.h"
using namespace std;

//=======================================================================
// Test cases
//=======================================================================

TEST_CASE("Create an empty list")
{
    List l{};

    REQUIRE(l.is_empty() == true);
    REQUIRE(l.size() == 0);
}

TEST_CASE("Insert 1-9 elements")
{
    List l{};
    l.insert(2);
    l.print();
    cout << endl;
    l.insert(3);
    l.print();
    cout << endl;
    l.insert(5);
    l.print();
    cout << endl;
    l.insert(7);
    l.print();
    cout << endl;
    l.insert(9);
    l.print();
    cout << endl;
    l.insert(4);
    l.print();
    cout << endl;
    l.insert(8);
    l.print();
    cout << endl;
    l.insert(1);
    l.print();
    cout << endl;
    l.insert(6);
    l.print();
    cout << endl;
    l.print();
    cout << endl;

    CHECK(l.size() == 9);

    CHECK_FALSE(l.is_empty());
}

TEST_CASE("Check size")
{
    List l{};
    l.insert(2);
    l.insert(3);
    l.insert(5);
    l.insert(7);
    l.insert(9);
    l.insert(4);
    l.insert(8);
    l.insert(1);
    l.insert(6);

    CHECK(l.size() == 9);
    CHECK_FALSE(l.size() == 2000);
}

TEST_CASE("Remove an item")
{
    List l{};
    l.insert(2);
    l.insert(3);
    l.insert(5);
    l.insert(7);
    l.insert(9);
    l.insert(11);
    l.print();
    cout << endl;
    l.remove(3);
    l.print();
}

// It is your job to create new test cases and fully test your Sorted_List class
