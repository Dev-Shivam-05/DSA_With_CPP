#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v_int;
    vector<double> v_double;
    vector<float> v_float;
    vector<char> v_char;
    vector<string> v_string;

    int choice;
    cout << "";
    do
    {
        cout << endl << "Press 1 to Create a Vector Of Integer Data Type" << endl;
        cout << "Press 2 to Create a Vector Of Double Data Type" << endl;
        cout << "Press 3 to Create a Vector Of Float Data Type" << endl;
        cout << "Press 4 to Create a Vector Of Char Data Type" << endl;
        cout << "Press 5 to Create a Vector Of String Data Type" << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Integer Vector Is Sucessfully Created";
        break;
        
        default:
            break;
        }
    } while (choice != 0);
    
    return 0;
}