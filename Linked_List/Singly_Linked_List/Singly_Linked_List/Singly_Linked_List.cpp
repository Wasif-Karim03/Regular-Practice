#include "Singly_Linked_List.h"


//Works of those functions:

bool IsEmpty(Node *head)
{
    return (head == NULL);
}


// Function to add a new node at the front of the linked list.
// Parameters:
//   head - pointer to the first node of the list.
//   new_data - the data value for the new node.
// Returns:
//   Pointer to the new head of the list.
Node *Add_Front(Node *head, int new_data)
{
    // Create a new node and initialize it with data.
    Node *newNode = new Node();     // Allocate memory for a new node.
    newNode->data = new_data;       // Set the data of the new node.
    newNode->next = head;           // Point the new node to the current head of the list.

    // Update the head to be the new node.
    head = newNode;                 // Make the new node the new head of the list.

    // Return the updated head of the list.
    return head;
}


// Function to add a new node at the end of the linked list.
// Parameters:
//   head - pointer to the first node of the list.
//   new_data - the data value for the new node.
// Returns:
//   Pointer to the head of the list.
Node *Add_End(Node *head, int new_data)
{
    // Create a new node and initialize it with data.
    Node *newNode = new Node();
    newNode->data = new_data;    // Set the new node's data.
    newNode->next = NULL;        // New node will be the last node, so set its next to NULL.

    // Check if the list is empty.
    if (IsEmpty(head))
    {
        cout << "The list is empty so adding this element as the only element" << endl;
        head = newNode;  // Make the new node the head of the list.
        return head;
    }
    else
    {
        // Traverse the list to find the last node.
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;  // Move to the next node.
        }
        temp->next = newNode;  // Link the last node to the new node.
    }
    return head;  // Return the head of the list.
}

Node *Add_At_Position(Node *head, int position, int new_data)
{
    Node *newNode = new Node ();
    newNode -> data = new_data;
}