/*==============================================================

    Data Structures Library
    Singly Linked List Node

    stores a data of type T 
    and a reference to the next item 

    author:
        adam.coville@gmail.com

==============================================================*/

#ifndef SLL_NODE
#define SLL_NODE

namespace structures
{
    template <typename T>
    class SLLNode
    {
        T data;
        SLLNode *next;
        bool tail = true;

        public:

        //================================================================

        // a node is a tail node if it has no next

        bool Tail() const
        {
            return tail;
        }

        //===============================================================

        /*------------------------------------

            I think it does not make sense to 
            instantiate a node unless there is 
            a value to store in its data. An 
            unpopulated node should not be in a
            list.

        -------------------------------------*/

        SLLNode(T arg)
        {

        }
        
        //===============================================================

        T& Data()
        {

        }

        //===============================================================

        /*---------------------------------------------

            Getter for the next node

            the return type is SLLNode &
            the returned object is a pointer

            I think this means I will be able to 
            set a pointer = to next's memory address

        ---------------------------------------------*/

        SLLNode &Next()
        {
            if(!tail)
            {
                return next;
            }
            else
            {
                // throw exception?
            }       
        }
    };
}

#endif