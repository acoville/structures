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

        /*---------------------------------------------

            I'm not sure why, but the default
            constructor was implicitly deleted

            Ah, I think it was beacuse of the nodes,
            which do not have default constructors. 
            Maybe now that I've made them pointers
            that will work?

        ---------------------------------------------*/

        SLinkedList()
        {

        }

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

        bool Find(T arg, SLLNode<T> out)
        {

        }
    };
}






#endif