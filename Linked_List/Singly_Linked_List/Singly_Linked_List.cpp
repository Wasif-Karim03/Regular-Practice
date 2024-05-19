#include "Singly_Linked_List.h"
#include <iostream>
using namespace std;

bool Is_Empty(Node *head)
{
    return (head == NULL);
}


void Print_List(Node *head)
{
    if (Is_Empty(head))
    {
        cout << "The list is empty" << endl;
        return;
    }

    while (head != NULL)
    {
        cout << head -> data << " | ";
        head = head -> next;
    }
}


//Insertion
Node *Add_Front(Node *head, int new_data)
{
    Node *newNode = new Node();
    newNode -> data = new_data;
    newNode -> next = head;
    head = newNode;
    return head;
}


Node *Add_End (Node *head, int new_data)
{
    Node *newNode = new Node();
    newNode -> data = new_data;
    newNode -> next = NULL;

    //check if the list is empty 
    if (Is_Empty(head))
    {
        cout << "The list is empty so adding as first element" << endl;
        head = newNode;
    }

    else 
    {
        Node *temp = head;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
    return head;
}


Node *Add_At_Position(Node *head, int Position, int new_data)
{
    Node *newNode = new Node();
    newNode -> data = new_data;

    if (Is_Empty(head))
    {
        cout << "The list is empty " << endl;
        return head;
    }

    Node *temp = head;
    int count = 0;

    while (temp -> next != NULL && count != (position-2))
    {
        temp = temp -> next;
        count ++;
    }

    if (temp == NULL)
    {
        cout << "The list is not that long" << endl;
        return;
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;
    return head;
}


//Deletion
Node *Delete_Front(Node *head)
{
    if (Is_Empty(head))
    {
        cout << "The list is empty " << endl;
        return head;
    }

    Node *temp = head;
    head = head -> next;
    delete temp;
    return head;
}


Node *Delete_End(Node *head)
{
    if (Is_Empty(head))
    {
        cout << "The list is empty" << endl;
        return;
    }
    //If there is just one element
    if(head -> next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *temp = head;
    while (temp ->next -> next != NULL)
    {
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = NULL;
    return head; 
}


Node *Delete_At_Position(Node *head, int position)
{
    if (Is_Empty(head) || position <= 0)
    {
        cout << "Invalid position or the list is empty" << endl;
        return head;
    }

    if (position == 1)
    {
        return Delete_Front(head);
    }

    Node *temp = head;
    int count = 0;
    while (temp -> next != NULL && count != (position - 2))
    {
        temp = temp -> next;
    }
    if (temp == NULL)
    {
        cout << "Position dosen't exist" << endl;
        return head;
    }

    Node *next = temp -> next -> next;
    delete temp->next;
    temp-> next = next;
    return head;
}

//This one is based on searching as we have to search the data first then have to delte it
Node *Delete_Data(Node *head, int data)
{
    if (Is_Empty(head))
    {
        cout << "The list is empty" << endl;
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;

    // check if the head node is the node we want to delete
    if (temp != NULL && temp -> data == data)
    {
        head = temp -> next;
        delete temp;
        return head;
    }

    while (temp != NULL && temp -> data != data)
    {
        perv = temp;
        temp = temp -> next;
    }
    if (temp == NULL)
    {
        cout << "Data not found "<< endl;
        return head;
    }

    prev->next = temp->next;
    delete temp;
    return head;
}


//Searching
Node *Search(Node *head, int data)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current-> data == data)
        {
            cout << "Data found" << endl;
            return current;
        }
        current = current -> next;
    }
    cout << "Data not found " << endl;
    return NULL;
}


//Sorting
Node *Sort(Node *head)
{
    if (Is_Empty(head) || head -> next == NULL)
    {
        cout <<"Either the list is empty or there is just one data so nothing to sort" << endl;
        return head;
    }

    bool swapped;
    Node *current;
    Node *prev = NULL;

    do 
    {
        swapped = false;
        current = head;

        while (current -> next != NULL)
        {
            if (current->data > current -> next -> data )
            {
                int temp = current -> next;
                current -> data = current-> next -> int data;
                current -> next -> data = temp;
                swapped = true;
            }
            current = current->next;
        }
        while (swapped);
        return head;
    }

}