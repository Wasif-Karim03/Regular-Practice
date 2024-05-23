#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H
#include <iostream>
using namespace std;

class Node 
{
    public :
    int data;
    Node * next;
};  
//Print
void Print_List(Node *head);
//check
bool IsEmpty(Node *head);

//Insertion
Node *Add_Front(Node *head, int newData);
Node *Add_End (Node *head, int newData);
Node *Add_At_Position(Node *head, int position, int newData);
//Deletion
Node *Delete_Front(Node *head);
Node *Delete_End(Node *head);
Node *Delete_At_Position(Node *head, int position);
Node *Delete_Data (Node *head, int data);
#endif
