#include<iostream>
using namespace std;

int top = -1;
int array[10];

void push(int element)
{
    array[++top] = element;
}

int pop()
{
    array[--top];
    return array[++top];
}

int peek()
{
    return array[top];
}

void isEmpty()
{
    if(top <= -1)
    {
        cout << endl << "The Arrray Is Empty." << endl;
    }
    else
    {
        cout << endl << "The Arrray Is Not Empty." << endl;
    }
}

int main()
{
    int data;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Value For Array [" << i << "] :- ";
        cin >> data;
        push(data);
    }
    
    int choice;
    do
    {
        cout << endl << "---- Program ----" << endl;
        cout << "Press 1 To Remove The Last Element." << endl;
        cout << "Press 2 To See The Top Most Element Of the Array." << endl;
        cout << "Press 3 To View The Array." << endl;
        cout << "Press 4 To Check If The Array Is Empty Or Not." << endl;
        cout << "Press 0 To Exit." << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "---- Your Program Is Sucessfully Exited. ----" << endl;
            break;

        case 1:
            cout << pop() << " is Removed." << endl;
            break;

        case 2:
            cout << endl << "The Top Most Element Of The Array Is :- " << peek();
            break;
        
        case 3:
            cout << "The Array is :- " ;
            for (size_t i = 0; i < top; i++)
            {
                cout << array[i] << " ";
            }
            break;
        
        case 4:
            isEmpty();
            break;
            
        default:
            cout << endl << "Wrong Choice..." << endl;
            break;
        }
    } while (choice != 0);
    

    return 0;
}