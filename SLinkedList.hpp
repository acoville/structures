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
        int middle_index = 0;

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
                    SLLNode<T> *head;

                    // if arg is > tail, then insert there
                    // this will solve in constant time

                    if(*tail < arg)
                    {
                        head = tail;
                        head->CreateChild(arg);
                        
                        tail = &tail->Next();
                    }

                    // otherwise, we will do at least 1 iteration 
                    // of binary search using the middle pointer

                    SLLNode<T> *end;

                    if(*middle <= arg)
                    {
                        head = middle;
                        end = tail;
                    }
                    else
                    {
                        head = start;
                        end = middle;
                    }

                    SLLNode<T> *next;

                    BEGIN:
                    
                    while(head != end)
                    {
                        // I will have to stitch nodes using a temp pointer here

                        next = &head->Next();

                        if(*head < arg and *next > arg)
                        {
                            // insert here 

                            head->CreateChild(arg);
                            head = &head->Next();
                            head->SetChild(*next);

                            goto END;
                        }

                        else
                        {
                            head = &head->Next();
                            goto BEGIN;
                        }                  
                    }

                    END:

                    break;
                }
            }

            size++;

            if(empty)
                empty = false;

            //-- update middle, if necessary?
            
            if(size > 2)
            {
                int new_middle = size / 2;

                if(new_middle != middle_index)
                {
                    int delta = new_middle - middle_index;

                    // I believe the delta should never be > 1

                    for(int i = 0; i < delta; i++)
                    {
                        // I don't see why this would ever be true, 
                        // but just incase

                        if(!middle->Leaf())
                        {
                            middle = &middle->Next();
                        }
                    }
                }
            }
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
            // arg out of bounds? then return F

            if(*start > arg || *tail < arg)
            {
                return false;
            }

            // arg == start?

            if(*start == arg)
            {
                return true;
            }

            // arg == tail?

            if(*tail == arg)
            {
                return true;
            }

            //------------------------------------------------------------
            // something is not working right in this half of Find
            //------------------------------------------------------------

            // cut the list in half for 1 iteration of binary search

            SLLNode<T> *head;
            SLLNode<T> *end;

            if(size < 5)
            {
                head = start;
                end = tail;
            }
            else
            {
                if(*middle < arg)
                {
                    head = middle;
                    end = tail;
                }
                else
                {
                    head = start;
                    end = middle;
                }
            }

            // search from head to end

            BEGIN:

            while(head != end)
            {
                if(*head == arg)
                {
                    return true;
                }
                else
                {
                    head = &head->Next();
                    goto BEGIN;
                }
            }

            // if execution comes to here then the value was not 
            // found in the appropriate half of the list.

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