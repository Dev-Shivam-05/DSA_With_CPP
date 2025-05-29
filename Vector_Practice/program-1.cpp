#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;

    int size,num_1;
    
    cout << "Enter The Size Of Array :- ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Value Of Vector [" << i << "] :- ";
        cin >> num_1;

        v1.push_back(num_1);
    }

    cout << endl << "Vector :- ";
    if (v1.size() == 0)
    {
        cout << " is empty.";
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cout << v1.at(i) << " ";
        }
    }
    
    
    return 0;
}