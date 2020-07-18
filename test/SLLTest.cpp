/*=============================================================

    Data Structures Library
    Singly Linked List test suite

==============================================================*/

#include "include/catch.hpp"
#include "../SLinkedList.hpp"


namespace structures::test
{
    //===========================================================================

    TEST_CASE("Empty list has a size of 0", "[Singly Linked List]")
    {
        auto t = SLinkedList<int>();

        int size = t.Size();

        REQUIRE(size == 0);
    }

    //===========================================================================

    TEST_CASE("Inserting increments size", "[Singly Linked List]")
    {
        auto t = SLinkedList<int>();

        t.Insert(5);

        int size = t.Size();

        REQUIRE(size == 1);
    }

    //===========================================================================

    TEST_CASE("Deleting decrements size when size > 0", "[Singly Linked List")
    {
        auto t = SLinkedList<int>();

        t.Insert(5);
        t.Insert(7);
        t.Delete(7);
        
        int size = t.Size();
        REQUIRE(size == 1);
    }

    //===========================================================================

    TEST_CASE("Default constructed List is Empty", "[Singly Linked List]")
    {
        auto t = SLinkedList<int>();
        bool empty = t.Empty();

        REQUIRE(empty);
    }

    //=============================================================================

    TEST_CASE("Inserting one element makes the list not empty", "[Singly Linked List]")
    {
        auto t = SLinkedList<int>();
        t.Insert(5);
        bool empty = t.Empty();

        REQUIRE(!empty);
    }

    //==============================================================================

    TEST_CASE("Deleting a list with one element makes it empty", "[Singly Linked List]")
    {
        auto t = SLinkedList<int>();
        t.Insert(5);
        t.Delete(5);
        bool empty = t.Empty();

        REQUIRE(empty);
    }

}