#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    int size,default_value;

    cout << "Enter The Size Of Vector :- ";
    cin >> size;
    cout << "Enter Default Value To Be Present In Vector :- ";
    cin >> default_value;

    vector<int> v1;
    vector<int> v2;

    int num_1;
    
    int choice;
    do
    {
        cout << endl << "Press 1 To Input In 1st Vector." << endl;
        cout << "Press 2 To Input In 2nd Vector." << endl;
        cout << "Press 3 To View In 1st Vector." << endl;
        cout << "Press 4 To View In 2nd Vector." << endl;
        cout << "Press 0 To Exit." << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "---- Your program Is Sucessfully Exited ----" << endl;
            break;
        
        case 1:
            for (int i = 0; i < size; i++)
            {
                cout << "Enter The Value Of Vector [" << i << "] :- ";
                cin >> num_1;

                v1.push_back(num_1);
            }            
            break;
        
        case 2:
            for (int i = 0; i < size; i++)
            {
                cout << "Enter The Value Of Vector [" << i << "] :- ";
                cin >> num_1;

                v2.push_back(num_1);
            }            
            break;
        
        case 3:            
            cout << endl << "Vector - 1 :- ";
            for (int i = 0; i < size; i++)
            {
                cout << v1.at(i) << " ";
            }
            break;

        case 4:
            cout << endl << "Vector - 2 :- ";
            for (int i = 0; i < size; i++)
            {
                cout << v2.at(i) << " ";
            }
            break;

        default:
            cout << "Wrong Choice" << endl;
            break;
        }
    } while (choice!= 0);
    
    
    return 0;
}