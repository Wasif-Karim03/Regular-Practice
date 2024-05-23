#include <iostream>
#include "Singly_Linked_List.h"
using namespace std;

int main()
{
    Node *head = NULL;
    int size, position, data;

    cout << "How many data you want to add at front ? : ";
    cin >> size;

    for (int i = 0; i < size; i ++)
    {
        cout << "Enter your " << i+1 << " data : ";
        cin >> data;
        head = Add_Front(head, data);
    } 
    cout << "After adding data : ";
    Print_List(head);

    cout << "Enter the data you want to add at the end : ";
    cin >> data;
    head = Add_End(head, data);
    cout << "After adding at the end : ";
    Print_List(head);

    cout << "Where you want to add another element: ";
    cin >> position;
    cout << "What you want to add at " << position <<" : ";
    cin >> data;
    head = Add_At_Position(head, position, data);
    cout <<"After adding "<< data << " at " << position <<"th position : ";
    Print_List(head);

    cout << "After deleting first element : ";
    head = Delete_Front(head);
    Print_List(head);

    cout << "After deleting end element : ";
    head = Delete_End(head);
    Print_List(head);

    cout << "Which position you want to delete ? ";
    cin >> position;
    head = Delete_At_Position(head, position);
    cout << "After deleting "<< position << "th position : ";
    Print_List(head);

    cout << "What data you want to delete ? ";
    cin >> data;
    head = Delete_Data(head, data);
    cout << "After deleting "<< data << " : ";
    Print_List(head);
    return 0;
}