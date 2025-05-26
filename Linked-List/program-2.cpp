#include<iostream>
using namespace std;

class Node 
{
public:     
    double data;
    Node* link;
};

int main()
{
    Node* Head = NULL;

    Head = new Node();
    cout << "Enter A Number :- ";
    cin >> Head->data;
    Head->link = NULL;

    Node* Current = NULL;
    
    Current = new Node();
    cout << "Enter Another Number :- ";
    cin >> Current->data;
    Current->link = NULL;
    Head->link = Current;


    Current = new Node();
    cout << "Enter Another Number :- ";
    cin >> Current->data;
    Current->link = NULL;
    Head->link->link = Current;                                                                                                                                                                                                                                     

    Node* ptr = NULL;
    ptr = Head;

    cout << endl << "Entered Linked List Is :- " << endl;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
    
    return 0;
}