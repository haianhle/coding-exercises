/* Singly linked list
   Although we can easily access the next node we cannot access the previous node

   Functions:
     - add_node
     - traversal
     - concatenate 2 linked lists 
     - insert a node
     - delete a node
*/

#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class linked_list
{

    private:
        node *head, *tail;

    public:
        linked_list()
        {
            head = NULL;
            tail = NULL;
        }

        void add_node(int n)
        {
            node *new_node = new node;
            new_node->data = n;
            new_node->next = NULL;
            if (head == NULL)
            {
                head = new_node;
                tail = new_node;
            } 
            else
            {
                tail->next = new_node;
                tail = tail->next;
            }
        }
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    return 0;
}
