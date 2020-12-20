/*=========================================================

    Singly Linked List
    (forward list)
    
    adam.coville@gmail.com

=========================================================*/

#ifndef SLL_LIST_HPP
#define SLL_LIST_HPP

namespace structures
{
    template <typename T>
    class list
    {
        protected:

            // node class 

            template <typename N>
            struct list_node
            {
                private:
                    
                    N data;

                public:

                    list_node* next;

                    list_node(N arg)
                    {
                        data = arg;
                        next = NULL;
                    }
            };

            //-------------------------------------------

            list_node<T>* head;
            list_node<T>* tail;

            int size = 0;

        public:

            //===============================================================

            operator bool()
            {
                return head == NULL ? false : true;
            }

            //===============================================================

            int Size() const
            {
                return size;
            }

            //===============================================================

            // on any given insert, tail will currently 
            // be pointing to the present end of the list. 

            // 1- this operation needs to create a new object, 
            // 2- link the current tail's next pointer to it, then
            // 3- set tail = tail's next. 

            // this will insert in constant time

            virtual void push_back(T arg)
            {
                size++;

                //---------------------------------------------
                // on the first insert, head will now be an object

                if(size == 1)
                {
                    head = new list_node<T>(arg);
                    tail = head;
                }

                //---------------------------------------------
                // if size == 2 or more, only move tail.
                
                if(size > 1)
                {
                    tail->next = new list_node<T>(arg);
                    tail = tail->next;
                }
            }

            //===============================================================

            ~list()
            {
                if(head != NULL)
                {
                    delete head;
                }
            }
    };
}

#endif