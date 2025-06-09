#include<iostream>
using namespace std;

int main()
{
    int row,column;

    cout << "Enter The Size Of Row Of Array :- ";
    cin >> row;

    cout << "Enter The Size Of Column Of Array :- ";
    cin >> column;

    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter The Element Of " << i << "th Row And " << j << "th Column Of The Array :- ";
            cin >> array[i][j];
        }
    }
    
    cout << endl;

    cout << "The UnSorted Array is :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;

    int pass = 1;
    while (pass < (row * column) - pass)
    {
        for (int i = 0; i < (row * column) - pass; i++)
        {
            if (array[i][i] < array[i][i + 1])
            {
                array[i][i] = array[i][i] + array[i][i + 1];
                array[i][i + 1] = array[i][i] - array[i][i + 1];
                array[i][i] = array[i][i] - array[i][i + 1];
            }
        }
        pass++;
    }
    
    cout << endl;

    cout << "The Sorted Array is :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}