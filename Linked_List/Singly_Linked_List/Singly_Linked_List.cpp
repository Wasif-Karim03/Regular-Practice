#include "Singly_Linked_List.h"
#include <iostream>
using namespace std;


void Print_List(Node *head)
{
    while(head != NULL)
    {
        cout << head -> data << " | ";
        head = head -> next;
    }
    cout << endl;
}

bool IsEmpty(Node *head)
{
    return head = NULL;
}

//Insertion
Node *Add_Front(Node *head, int newData)
{
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = head;
    head = newNode;
    return head;
}

Node *Add_End (Node *head, int newData)
{
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = NULL;
    if(IsEmpty(head))
    {
        cout << "The list is empty so adding as the fitst element" << endl;
        head = Add_Front(head, newData);
    }

    Node *temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newNode;
    return head;
}

Node *Add_At_Position(Node *head, int position, int newData)
{
    Node *newNode = new Node();
    newNode -> data = newData;

    //check if it's empty 
    if (IsEmpty(head))
    {
        cout <<"The list is empty so can't add"<< endl;
        return newNode;
    }

    if (position == 1)
    {
        return Add_Front(head, newData);
    }

    Node *temp = head;
    int count = 0;
    for (int i = 0; i < position-2 ; i ++)
    {
        if (temp != NULL)
        {
            temp = temp -> next;
        }
    }
    if (temp != NULL)
    {
        newNode -> next = temp ->next;
        temp -> next = newNode;
    }

    else 
    {
        cout << "The position dosent even exist "<< endl;
    }
    return head;
}

//Deletion
Node *Delete_Front(Node *head)
{
    if (IsEmpty(head))
    {
        cout << "The list is empty"<< endl;
        return head;
    }
    Node* temp = head;
    head = head-> next;
    delete temp;
    return head;
}
Node *Delete_End(Node *head)
{
    if (IsEmpty(head))
    {
        cout << "The list is empty so nothing to delete"<< endl;
        return head;
    }
    //if there is only one element 
    if (head -> next == NULL)
    {
       return Delete_Front(head); 
    }
    Node *temp = head;
    while (temp -> next -> next != NULL)
    {
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = NULL;
    return head;
}

Node *Delete_At_Position(Node *head, int position)
{
    int count = 0;
    Node *temp = head;
    //
    if (IsEmpty(head))
    {
        cout << "The list is empty" << endl;
        return head;
    }
    if (position == 1)
    {
        return Delete_Front(head);
    }
    for (int i = 0; i < position-2; i ++)
    {
        if (temp != NULL)
        {
            temp = temp -> next;
        }
    }

    if (temp != NULL && temp -> next != NULL)
    {
        Node *nodeToDelete = temp-> next;
        temp -> next = temp -> next -> next;
        delete nodeToDelete;
    }

    else 
    {
        cout << "The position dosen't even exist "<< endl;
    }
    return head;
}
Node *Delete_Data (Node *head, int data)
{
    if (IsEmpty(head))
    {
        cout << "The list is empty "<< endl;
        return head;
    }

    if (head -> data == data)
    {
        return Delete_Front(head);
    }

    Node *temp = head;
    while (temp -> next != NULL && temp -> next -> data != data)
    {
        temp = temp -> next;
    }

    if (temp -> next != NULL)
    {
        Node *nodeToDelete = temp -> next;
        temp -> next = temp -> next -> next;
        delete nodeToDelete;
    }
    else 
    {
        cout << "Data not found " << endl;
    }
    return head;
}