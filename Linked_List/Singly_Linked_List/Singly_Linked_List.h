#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H


class Node 
{
    public : 
    int data;
    Node *next;
};

void Print_List(Node *head);
bool Is_Empty(Node *head);
//Insertion
Node *Add_Front(Node *head, int new_data);
Node *Add_End (Node *head, int new_data);
Node *Add_At_Position(Node *head, int Position, int new_data);
//Deletion
Node *Delete_Front(Node *head);
Node *Delete_End(Node *head);
Node *Delete_At_Position(Node *head, int position);
Node *Delete_Data(Node *head, int data);
//Searching
Node *Search(Node *head, int data);
//Sorting
Node *Sort(Node *head);

