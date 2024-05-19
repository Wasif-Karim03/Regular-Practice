#include "Singly_Linked_List.h"
#include <iostream>
using namespace std;

int main()
{
    Node *head = NULL;
    int size, data, position;

    cout << "How many data you want to add at the front : ";
    cin >> size;
    cout << endl;
    for (int i=0; i < size; i ++)
    {
        cout << "Enter  your " << i + 1 << " data : ";
        cin >>  data;
        cout << endl;
        head = Add_Front(head, data);
    }
    cout << "After adding these data the list will be : ";
    Print_List(head);
    cout << endl;

    cout << "What you want to add at the last : ";
    cin >> data;
    cout << endl;
    head = Add_End(head, data);
    cout << "After adding at the last : ";
    Print_List(head);
    cout << endl;

    cout << "Where you want to add another data : (Position) : ";
    cin >> position;
    cout << endl;
    cout << "What you want to add : ";
    cin >> data;
    cout << endl;
    head = Add_At_Position(head, position, data);
    cout << "After adding this "<<data<< " on "<<position<<"position : ";
    Print_List(head);
    cout << endl;

    cout << "After deleting the first data : ";
    head = Delete_Front(head);
    Print_List(head);
    cout << endl;

    cout << "After deleting the last data : ";
    head = Delete_End(head);
    Print_List(head);
    cout << endl;

    cout << "Which position's data you want tp delete (position (start from 1)) : ";
    cin >> position;
    cout << endl;
    cout << "After deleting "<< position <<" position data : ";
    head = Delete_At_Position(head, position);
    Print_List(head);
    cout << endl;

    cout << "Which data you want to delete : ";
    cin >> data;
    cout << endl;
    head = Delete_Data(head, data);
    cout << "After deleting "<< data << " : ";
    Print_List(head);
    cout << endl;

    cout << " Now the rest of the data after sorting (< < <) : ";
    Print_List(head);
    cout << "DONE XXX" << endl;
}