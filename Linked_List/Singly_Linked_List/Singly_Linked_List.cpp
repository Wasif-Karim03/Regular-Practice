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

}


Node *Add_End (Node *head, int new_data)
{

}


Node *Add_At_Position(Node *head, int Position, int new_data)
{

}


//Deletion
Node *Delete_Front(Node *head)
{

}


Node *Delete_End(Node *head)
{

}


Node *Delete_At_Position(Node *head, int position)
{

}


Node *Delete_Data(Node *head, int data)
{

}


//Searching
Node *Search(Node *head, int data)
{

}


//Sorting
Node *Sort(Node *head)
{

}