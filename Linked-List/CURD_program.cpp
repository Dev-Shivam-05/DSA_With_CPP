#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* link;

    Node(int data)
    {
        this->data = data;
        this->link = NULL;
    }
};

class Linked_list
{
public:
    Node* head;
    int size;

    Linked_list()
    {
        this->head = NULL;
        this->size = 0;
    }

    void InsertAtFront(int data)
    {
        Node* newNode = new Node(data);
        newNode->link = this->head;
        this->head = newNode;
        this->size++;
    }

    void InsertAtEnd(int data)
    {
        if (this->head = NULL)
        {
            cout << "Linked_List Is Empty.";
        }
        else
        {
            Node*ptr = this->head;
            while (ptr->link != 0)
            {
                ptr = ptr->link;
            }

            Node* newNode = new Node(data);
            ptr->link = this->head;
            this->size++;
        }
    }
    void InsertAtIndex(int data,int index);
   
    void DeleteAtFront();
    void DeleteAtEnd();
    void DeleteAtIndex(int index);
    
    void Update(int data,int index);

    int is_empty();

    void printview()
    {
        Node* ptr = this->head;
        cout << "Given Linked List is :- " << endl;
        while (ptr->link != NULL)
        {
            cout << ptr->data << " ";
        }
    }
};

int main()
{
    Linked_list l;
    int choice,element,index;

    do
    {
        cout << endl << endl << "----- Program's -----" << endl << endl;        
        cout << "Press 1 To Insert At Front." << endl;
        cout << "Press 2 To Insert At End." << endl;
        cout << "Press 3 To Insert At Index." << endl;
        cout << "Press 4 To Delete At Front." << endl;
        cout << "Press 5 To Delete At End." << endl;
        cout << "Press 6 To Delete At Index." << endl;
        cout << "Press 7 To Update." << endl;
        cout << "Press 8 To View List." << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "---- Your Program Is Sucessfully Executed. ----" << endl;
            break;
        
        case 1:
            cout << "Enter Element To Insert :- ";
            cin >> element;
            l.InsertAtFront(element);
            break;
        
        case 2:
            cout << "Enter Element To Insert :- ";
            cin >> element;
            l.InsertAtEnd(element);
            break;
        
        case 3:
            cout << "Enter Index Number To Insert :- ";
            cin >> index;
            cout << endl;
            cout << "Enter Element To Insert :- ";
            cin >> element;
            l.InsertAtIndex(element,index);
            break;
        
        case 4:
            l.DeleteAtFront();
            break;
        
        case 5:
            l.DeleteAtEnd();
            break;
        
        case 6:
            cout << "Enter Index Number To Delete :- ";
            cin >> index;
            cout << endl;
            l.DeleteAtIndex(index);
            break;
        
        
        case 7:
            cout << "Enter Index Number To Update :- ";
            cin >> index;
            cout << endl;
            cout << "Enter Element To Replace :- ";
            cin >> element;
            l.Update(element,index);
            break;

        case 8:
            l.printview();
        default:
            break;
        }

    } while (choice != 0);
    
    return 0;
}