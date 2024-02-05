#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertathead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->data = val;
    n->next = head;
    head = n;
}

void deleteathead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        return;
    }
    node *temp = head;
    head = temp->next;
    temp->next = NULL;
}

void deleteattail(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        head = NULL;
        return;
    }

    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

void getlength(node *&head)
{
    node *temp = head;
    if (temp == NULL)
    {
        cout << "\n Length is : " << 0 << endl;
    }
    else if (temp->next == NULL)
    {
        cout << "\n Length is : " << 1 << endl;
    }
    int count = 0;
    while (temp != NULL)
    {
        count = count + 1;
        temp = temp->next;
    }
    cout << "\nLength is : " << count << endl;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << " NULL " << endl;
    return;
}

int main()
{
    node *head = NULL;

    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    insertattail(head, 7);
    display(head);

    insertathead(head, 1);
    display(head);

    insertathead(head, 2);
    display(head);

    deleteathead(head);
    display(head);

    deleteathead(head);
    display(head);

    deleteattail(head);
    display(head);

    getlength(head);

    return 0;
}