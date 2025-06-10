#include<iostream>
using namespace std;

void InsertionSort(int [],int);
void Display(int [],int);

int main()
{
    int size;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    int array[size];

    cout << endl << "Enter " << size <<" Elemnt Of Array :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }

    cout << endl << "The Orignal Array Is :- ";
    Display(array,size);

    InsertionSort(array,size);
    
    cout << endl << "The Sorted Array Is :- ";
    Display(array,size);
    return 0;
}

void InsertionSort(int array[],int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void Display(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}