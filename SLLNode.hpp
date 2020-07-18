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
        bool leaf = true;

        public:

        //================================================================

        // a node is a leaf node if it has no next

        bool Leaf() const
        {
            return leaf;
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

        T Data()
        {
            return data;
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
            if(!leaf)
            {
                return *next;
            }
            else
            {
                return *this;
            }       
        }

        //==================================================================

        /*---------------------------------

            Set Child = to another node

        ---------------------------------*/

        void SetChild(SLLNode &other)
        {
            next = &other;
        }

        //=================================================================

        /*---------------------------------

            Create a child Node

        ----------------------------------*/

        void CreateChild(T arg)
        {
            next = new SLLNode(arg);
            leaf = false;
        }

        //================================================================

        /*-----------------------------------

            Destructor

        ------------------------------------*/

        virtual ~SLLNode<T>()
        {
            if(!leaf)
            {
                delete next;
            }
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