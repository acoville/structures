#include "include/catch.hpp"
#include "../SLLNode.hpp"



namespace structures::test
{
    TEST_CASE("New Node is a tail node", "[SLLNode]")
    {
        auto n = SLLNode<int>(5);

        bool tail = n.Tail();

        REQUIRE(tail);
    }
}