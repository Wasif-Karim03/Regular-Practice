#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>

//Defining Node type class
class Node 
{
    public :
    int data;
    Node *next;
};


//Defining all the functions :

//Check if the list is empty
bool IsEmpty(Node *head);

//Insertion:
Node *Add_Front(Node *head, int new_data);
Node *Add_End (Node *head, int new_data);
Node *Add_At_Position(Node *head, int position, int new_data);
//Deletion
Node *Delete_Front(Node *head);
Node *Delete_End(Node *head);
Node *Delete_At_Position(Node *head, int position);
//Search an element
Node *Search_Element();
//Reverse A list 
Node *Reverse_List();
//Sort List 
Node *Sort_List();
//Print List 
void Print_List(Node *head);


#endif




