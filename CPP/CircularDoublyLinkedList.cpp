#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node* prev;

    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

node* head = NULL;
node* tail = NULL;

void InsertAtBegin(node* &head, int value)
{
    if (head == NULL)
    {
        head = new node(value);
        head->next = head;
        head->prev = head;
        tail = head;
    }

    else
    {
        node* temp = new node(value);
        temp->next = head;
        head->prev = temp;
        tail->next = temp;
        temp->prev = tail;
        head = temp;
    }
}

void InsertAtEnd(node* &head, int value)
{
    if (head == NULL)
    {
        head = new node(value);
        head->next = head;
        head->prev = head;
        tail = head;
    }

    else
    {
        node* temp = new node(value);
        temp->next = head;
        tail->next = temp;
        temp->prev = tail;
        head->prev = temp;
        tail = temp;
    }
}

void DeleteValue(node* &head, int value)
{
    if (head == NULL)
    {
        cout << "The list is empty!" << endl;
    }
    if (head->data == value)
    {
        if (head->next == head)
        {
            delete(head);
            head = NULL;
        }
        else
        {
            head->prev->next = head->next;
            head->next->prev = head->prev;
            node* temp = head->next;
            delete(head);
            head = temp;
        }
    }
    else
    {
        node* temp = head->next;

        do
        {
            if (value == temp->data)
            {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete(temp);
                return;
            }
            temp = temp->next;
        }while(temp != head);

        cout << "The value is not present in the list!" << endl;
    }

}

void printlist(node* temp)
{
    if (temp != NULL)
    {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }while(temp != head);

        cout << endl;
    }

    else
    {
        cout << "The List is empty!" << endl;
    }
}

int main()
{
    int t, value;

    while(true)
    {
        cout << "Press 1 to Insert at End" << endl;
        cout << "Press 2 to Insert at Beginning" << endl;
        cout << "Press 3 to Delete" << endl;
        cout << "Press 4 to Print List" << endl;
        cout << "Press 5 to Exit" << endl;

        cin >> t;
        cout << endl;
        switch(t)
        {

            case 1:
            cout << "Enter value: ";
            cin >> value;
            InsertAtEnd(head, value);
            break;

            case 2:
            cout << "Enter value: ";
            cin >> value;
            InsertAtBegin(head, value);
            break;

            case 3:
            cout << "Enter value: ";
            cin >> value;
            DeleteValue(head, value);

            case 4:
            printlist(head);
            cout << endl << endl;
            break;

            case 5:
            return 0;
        }
    }
    return 0;
}