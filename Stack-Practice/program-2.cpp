#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    // Top is Given "size - 1" Because Array Idex Is Always Starts From 0
    int top = size;

    int array[size];
    int choice;
    do
    {
        cout << endl << "---- Program ----" << endl;
        cout << "Press 1 To Add Element In Array." << endl;
        cout << "Press 2 To Remove The Last element." << endl;
        cout << "Press 3 To See the Top Most Element Of the Array." << endl;
        cout << "Press 4 To Check If The Array Is Empty Or Not." << endl;
        cout << "Press 5 To View The Array." << endl;
        cout << "Press 0 To Exit." << endl;
        cout << "Enter your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "---- Your Program Is Sucessfully Exited ----" << endl;
            break;
        
        case 1:    
            for (int i = 0; i < size; i++)
            {
                cout << "Enter the Element Of Array[" << i << "] :- ";
                cin >> array[i];
            }
            break;

        case 2:
            cout << "The Last Element : " << array[--top] << " Removed.";
            break;

        case 3:
            cout << "The Top Most Element Of The Array Is :- " << array[top-1];
            break;

        case 4:
            if (top >= -1)
            {
                cout << endl << "The Array Is Empty" << endl;
            }
            else
            {
                cout << endl << "The Array Is Not Empty" << endl;
            }
            break;
        
        case 5:
            cout << endl << "The Array Is :- ";
            for (int i = 0; i < top; i++)
            {
                cout << array[i] << " ";
            }
            break;

        default:
            cout << "Wrong Choice...." << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}