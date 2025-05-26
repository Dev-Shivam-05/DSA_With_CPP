#include<iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;
};

int main()
{
    Node* HEAD = NULL;
    
    HEAD = new Node();
    HEAD->data = 10;
    HEAD->next = NULL;

    Node* Current = NULL;

    Current = new Node();
    Current->data = 20;
    Current->next = NULL;
    HEAD->next = Current;
    
    Current = new Node();
    Current->data = 30;
    Current->next = NULL;
    HEAD->next->next = Current;

    Current = new Node();
    Current->data = 40;
    Current->next = NULL;
    HEAD->next->next->next = Current;

    cout << "Head Address :- " << HEAD << endl;
    cout << "Head Data :- " << HEAD->data << endl;
    cout << "1st Current Data Is :- " << HEAD->next->data << endl;
    cout << "1st Current Address Is :- " << HEAD->next->next << endl;
    cout << "2nd Current Data Is :- " << HEAD->next->next->data << endl;
    cout << "2nd Current Address Is :- " << HEAD->next->next->next << endl;
    cout << "3rd Current Data Is :- " << HEAD->next->next->next->data << endl;
    cout << "3rd Current Address Is :- " << HEAD->next->next->next->next << endl;

    cout << endl << endl;

    cout << HEAD << " - " << HEAD->data << " - " << HEAD->next << endl;
    cout << HEAD->next << " - " << HEAD->next->data << " - " << HEAD->next->next << endl;
    cout << HEAD->next->next << " - " << HEAD->next->next->data << " - " << HEAD->next->next->next << endl;
    cout << HEAD->next->next->next << " - " << HEAD->next->next->next->data << " - " << HEAD->next->next->next->next << endl;
    
    
    return 0;
}