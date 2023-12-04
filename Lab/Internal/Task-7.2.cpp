#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int value)
        {
            data=value;
            next=NULL;
        }
};
class List
{
    public:
        Node *head;
        Node *tail;
        List()
        {
            head=tail=NULL;
        }
        void display()
        {
            Node *current = head;
            while (current != nullptr)
            {
                cout << current->data;
                if (current->next != nullptr)
                {
                    cout << " > ";
                }
                current = current->next;
            }
            cout << endl;
        }
        void append(int value)
        {
            Node *newNode = new Node(value);
            if (head == nullptr)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }
};
int main()
{
    List myList;
    myList.append(10);
    myList.append(20);
    myList.append(30);
    myList.append(40);
    myList.append(50);
    cout << "Linked List is: ";
    myList.display();
    return 0;
}
