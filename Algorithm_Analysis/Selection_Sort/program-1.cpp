#include<iostream>
using namespace std;

class Selection_Sort
{
public:
    void selection_sort(int array[],int size)
    {
        int min;

        for (int i = 0; i < size - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < size; j++)
            {
                if (array[min] > array[j])
                {
                    min = j;
                }
            }
            // array[min] = array[i] + array[min];
            // array[i] = array[i] - array[min];
            // array[min] = array[i] - array[min];
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
        
    }

    // int Swapit(int a, int b)
    // {
    //     a = a + b;
    //     b = a - b;
    //     a = a - b;

    //     return a , b;
    // }

    void DisplayArray(int array[],int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
    }
};

int main()
{
    Selection_Sort obj;
    int size;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " Elements Of :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i + 1 << "] :- ";
        cin >> array[i];
    }

    cout << endl << "The Unsorted Array is :- ";
    obj.DisplayArray(array,size);

    obj.selection_sort(array,size);
    
    cout << endl << "The Sorted Array is :- ";
    obj.DisplayArray(array,size);
    
    return 0;
}