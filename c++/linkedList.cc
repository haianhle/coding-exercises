/* Singly linked list
   Although we can easily access the next node we cannot access the previous node

   Functions available:
     - add_node
     - delete_node
     - display_list
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

        node* get_head()
        {
            return head;
        }

        void delete_node(node *before)
        {
            node *tmp;
            tmp = before->next;
            before->next = tmp->next;
            delete tmp;
        }

        void display(node *head)
        {
            if (head == NULL)
            {
                cout << "NULL" << endl;
            }
            else
            {
                cout << head->data << endl;
                display(head->next);
            }
        }

};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(5);
    a.add_node(8);
    a.add_node(7);
    a.display(a.get_head());
    a.delete_node(a.get_head()->next->next);
    a.display(a.get_head());
    return 0;
}
