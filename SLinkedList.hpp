/*==============================================================

    Data Structures Library
    Singly Linked List

    stores data and performs find, insert and delete
    in worst case linear time 

    author:
        adam.coville@gmail.com

==============================================================*/

#ifndef SLL_HPP
#define SLL_HPP

#include <functional>
#include "SLLNode.hpp"

namespace structures
{
    template <typename T, class invariant = std::less<T>>
    class SLinkedList
    {
        int size = 0;
        bool empty = true;
        SLLNode<T> *start;
        SLLNode<T> *tail;
        SLLNode<T> *head;

        //================================================================

        public:

        //================================================================

        int Size() const
        {
            return size;
        }

        //================================================================

        bool Empty() const
        {
            return empty;
        }

        //================================================================

        void Insert(T arg) 
        {


            size++;

            if(empty)
                empty = false;
        }

        //===============================================================

        void Delete(T arg)
        {


            if(size > 0)
            {
                size--;
            }
            else
            {
                // throw exception?
            }

            if(size == 0)
                empty = true;
        }

        //==============================================================

        /*----------------------------------------

            This version of Find is for use cases
            where you only want to know weather 
            the result is in this list and do not
            want a pointer to it 

            I guess you could call this a read-only 
            find?

        -----------------------------------------*/

        bool Find(T arg) const
        {
            return false;
        }

        //==============================================================

        /*----------------------------------------

            This version of Find is for cases
            where you want to see if the value is 
            in the list and want a handle on that 
            node to manipulate.

            read-write find

        -----------------------------------------*/

        bool Find(T arg, SLLNode<T> out)
        {
            return false;
        }
    };
}






#endif