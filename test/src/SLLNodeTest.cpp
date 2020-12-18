#include "../include/catch.hpp"
#include "../../src/include/SLLNode.hpp"



namespace structures::test
{
    TEST_CASE("New Node is a tail node", "[SLLNode]")
    {
        auto n = SLLNode<int>(5);

        bool tail = n.Tail();

        REQUIRE(tail);
    }

    //=========================================================================

    TEST_CASE("Operator < test T", "[SLLNode]")
    {
        auto n1 = SLLNode<int>(5);
        auto n2 = SLLNode<int>(7);

        bool result = n1 < n2;

        REQUIRE(result);
    }

    //-----------------------------------------------

    TEST_CASE("Operator < test F", "[SLLNode]")
    {
        auto n1 = SLLNode<int>(7);
        auto n2 = SLLNode<int>(5);

        bool result = n1 < n2;

        REQUIRE(!result);       
    }

    //===========================================================================

    TEST_CASE("Operator > test T", "[SLLNode]")
    {
        auto n1 = SLLNode<int>(7);
        auto n2 = SLLNode<int>(5);

        bool result = n1 > n2;

        REQUIRE(result);
    }

    //----------------------------------------------------

    TEST_CASE("Operator > test F", "[SLLNode]")
    {
        auto n1 = SLLNode<int>(5);
        auto n2 = SLLNode<int>(7);

        bool result = n1 > n2;

        REQUIRE(!result);
    }

    //=========================================================================

    TEST_CASE("Operator < type T test, T", "[SLLNode]")
    {
        auto n1 = SLLNode<int>(5);

        bool result = n1 < 7;

        REQUIRE(result);
    }

    //-----------------------------------------------

    TEST_CASE("Operator < type T test, F", "[SLLNode]")
    {
        auto n1 = SLLNode<int>(7);

        bool result = n1 < 5;

        REQUIRE(!result);       
    }

    //===========================================================================

    TEST_CASE("Operator > type T test, T", "[SLLNode]")
    {
        auto n1 = SLLNode<int>(7);

        bool result = n1 > 5;

        REQUIRE(result);
    }

    //----------------------------------------------------

    TEST_CASE("Operator > type T test, F", "[SLLNode]")
    {
        auto n1 = SLLNode<int>(5);

        bool result = n1 > 7;

        REQUIRE(!result);
    }

       
}