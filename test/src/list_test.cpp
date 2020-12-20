/*============================================================

    test suite for the singly linked / forward list class

=============================================================*/

#include "../include/catch.hpp"
#include "../../src/include/sll_list.hpp"
using structures::list;

namespace structures::test
{
    TEST_CASE("New list has a null head node", "[list]")
    {
        list<int> sut = list<int>();
        REQUIRE(!sut);
    }

    //----------------------------------------------------------
/*
    TEST_CASE("New list with 1 node is non-null", "[list]")
    {
        list<int> sut = list<int>();      
        sut.push_back(5);

        REQUIRE(!sut);
    }
*/
}

