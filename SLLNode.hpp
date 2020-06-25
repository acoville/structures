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
        bool tail;

        public:

        T& Data() const;
        T& Data();

        SLLNode &Next();
    };
}

#endif