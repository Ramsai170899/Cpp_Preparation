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

void deleteat(node *&head, int pos)
{
    if (pos == 0)
    {
        head = head->next;
    }

    node *temp = head;
    int count = 1;

    while (temp != NULL)
    {
        if (pos == count)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
        count++;
    }
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

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
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

    deleteattail(head);
    display(head);

    getlength(head);

    node *newhead = reverse(head);
    display(newhead);

    return 0;
}