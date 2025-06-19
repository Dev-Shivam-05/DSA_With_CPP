#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Value Of Array[" << i << "] :- ";
        cin >> array[i];
    }
    
    cout << "The Unsorted Array Is :- ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j <= size; j++)
        {
            if (array[i] > array[j])
            {
                array[i] = array[i] + array[j];
                array[j] = array[i] - array[j];
                array[i] = array[i] - array[j];
            }
            else
            {
                continue;
            }
        }
    }

    cout << "The Sorted Array Is :- ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    
    
    return 0;
}