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

namespace structures
{
    template <typename T, class invariant = std::less<T>>
    class SLinkedList
    {
        int size = 0;
        bool empty = true;

        //================================================================

        public:
        
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


    };
}






#endif