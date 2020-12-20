/*============================================================

    test suite for the singly linked / forward list class

=============================================================*/

#include <time.h>

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

    TEST_CASE("New list with 1 node has size > 1", "[list]")
    {
        list<int> sut = list<int>();      
        sut.push_back(5);

        REQUIRE(sut.Size() == 1);
    }

    //-----------------------------------------------------------

    TEST_CASE("Constant Time push_back test", "[list]")
    {
        time_t timer;
        time_t timer2;
        
        double time_to_push_back1;
        double time_to_push_back2;

        list<int> sut = list<int>();

        //----------------- push back on an empty list and see
        //                  how long it takes

        time(&timer);

        sut.push_back(5);

        time(&timer2);

        time_to_push_back1 = difftime(timer, timer2);

        //----------------- now push back on a larger list
        //                  and see how long it takes

        for(int i = 0; i < 1000; i++)
        {
            sut.push_back(i);
        }

        time(&timer);

        sut.push_back(10);

        time(&timer2);

        time_to_push_back2 = difftime(timer, timer2);

        REQUIRE(time_to_push_back1 == time_to_push_back2);        
    }
}

