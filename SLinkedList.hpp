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
        SLLNode<T> *middle;
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

        /*------------------------------------------------------------

            Insert creates a new node at the appropriate
            place within the linked list. 

            OPTIMIZATION STRATEGY

                - best case constant time (arg > tail)
                - worst case linear time / 2 (arg > or < mid)

            if size == 0, head = new SLLNode<T>

            if size > 0,

                if (arg > tail), tail.Next = new SLLNode<T>
                    O 1 time

                if (arg > mid), head = mid, then iterate through the 
                    back half of the list until correct place is found

                if (arg < mid), head = start, then iterate through the 
                    front half of the list until correct place is found  

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
                    // if arg is > tail, then insert there

                    if(*tail < arg)
                    {
                        head = tail;
                        head->CreateChild(arg);
                        
                        tail = &tail->Next();
                        middle = &middle->Next();
                    }

                    // otherwise, we will do at least 1 iteration 
                    // of binary search using the middle pointer

                    //if(arg >= *middle)
                    
                    if(*middle <= arg)
                    {
                        head = middle;
                    }
                    else
                    {
                        head = start;
                    }

                    BEGIN:





                    END:

                    break;
                }
            }

            size++;

            if(empty)
                empty = false;

            // update middle 
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

            This version of Find is for use cases
            where you only want to know weather 
            the result is in this list and do not
            want a pointer to it 

            I guess you could call this a read-only 
            find?

        --------------------------------------------*/

        bool Find(T arg)
        {
            head = start;

            BEGIN:

            if(*head == arg)
            {
                return true;
            }
            else
            {
                if(head->Leaf())
                {
                    return false;
                }
                else
                {
                    head = &head->Next();
                    goto BEGIN;
                }
            }

            return false;
        }

        //==============================================================

        /*--------------------------------------------

            This version of Find is for cases
            where you want to see if the value is 
            in the list and want a handle on that 
            node to manipulate.

            read-write find

        ---------------------------------------------*/

        bool Find(T arg, SLLNode<T> out)
        {
            return false;
        }
    };
}






#endif