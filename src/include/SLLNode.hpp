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
        //friend class SLinkedList<T>;

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
            data = arg;
        }
        
        //===============================================================

        T& Data()
        {
            return &data;
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
                return *next;
            }
            else
            {
                // throw exception?
            }       
        }

        //================================================================

        /*-----------------------------------------

            Function to add a new child node
            to this node

        -----------------------------------------*/


        //================================================================

        /*----------------------------------------

            Boolean comparison operators



        -----------------------------------------*/

        bool operator < (const SLLNode &other) const
        {
            //return (*this < other ? true : false);

            T data1 = this->data;
            T data2 = other.data;

            return data1 < data2 ? true : false;
        }

        //----------------------------------------------

        bool operator > (const SLLNode &other) const
        {
            //return (*this > other ? true : false);

            T data1 = this->data;
            T data2 = other.data;

            return data1 > data2 ? true : false;
        }

        //====================================================================

        /*-----------------------------------------

            Now I want comparison operators against
            objects of type T

        -----------------------------------------*/

        bool operator < (const T &arg) const
        {
            return data < arg ? true : false;
        }

        //----------------------------------------

        bool operator > (const T &arg) const
        {
            return data > arg ? true : false;
        }

        //=====================================================================

        /*-----------------------------------------

            Equality, Inequality operators
            for type T 

        ------------------------------------------*/

        bool operator == (const T &arg)
        {
            return (data == arg) ? true : false;
        }

        //---------------------------------------

        bool operator != (const T &arg)
        {
            return (data != arg) ? true : false;
        }
    };
}

#endif