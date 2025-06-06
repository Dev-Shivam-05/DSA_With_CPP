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

    cout << "The Sorted Array is :- " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < column; j++)
        {
            if (array[j][i] > array[i][j])
            {
                array[i][j] = array[i][j] + array[j][i];
                array[j][i] = array[i][j] - array[j][i];
                array[i][j] = array[i][j] - array[j][i];
            }
            else
            {
                continue;
            }
            
        }
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