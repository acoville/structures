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
    template <typename T>
    class SLinkedList
    {
        int size = 0;
        bool empty = true;

        SLLNode<T> *start;
        SLLNode<T> *tail;

        SLLNode<T> *middle;
        int middle_index = 0;

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

        /*------------------------------------------------------------

            Insert creates a new node at the appropriate
            place within the linked list. 

        --------------------------------------------------------------*/

        void Insert(T arg) 
        {
            switch(size)
            {
                // list is empty, this will be the first node

                case(0):
                {
                    start = new SLLNode<T>(arg);
                    middle = start;
                    tail = start;

                    break;
                }

                //-------------------------------------------

                default:
                {


                    break;
                }
            }

            size++;

            if(empty)
                empty = false;
        }

        //===============================================================

        virtual ~SLinkedList()
        {
            if(start)
            {
                delete start;
            }
        }

        //===============================================================
/*
*/
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

        /*--------------------------------------------

            This version of Find is for cases
            where you want to see if the value is 
            in the list and want a handle on that 
            node to manipulate.

            read-write find

        ---------------------------------------------*/

        bool Find(T arg, SLLNode<T> *out = new SLLNode<T>())
        {
            // arg out of bounds? then return F

            if(*start > arg || *tail < arg)
            {
                return false;
            }

            // arg == start?

            if(*start == arg)
            {
                out = start;
                return true;
            }

            // arg == tail?

            if(*tail == arg)
            {
                out = tail;
                return true;
            }



            return false;
        }
    };
}






#endif