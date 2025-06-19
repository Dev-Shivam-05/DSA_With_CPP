#include<iostream>
using namespace std;

void SelectionSort(int [],int);
void Display(int [],int);

int main()
{
    int size;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    int* array = new int[size];

    cout << endl << "Enter " << size << " Elemnts :- "<< endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array["<< i <<"] :- ";
        cin >> array[i];
    }
    
    cout << endl << "The Unsorted Array Is :- ";
    Display(array,size);

    SelectionSort(array,size);

    cout << endl << "The Sorted Array Is :- ";
    Display(array,size);

    delete[] array;
    return 0;
}

void SelectionSort(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        int minimum = i;

        for (int j = i + 1; j < size; j++)
        {
            if (array[minimum] < array[j])
            {
                minimum = j;
            }
        }
        swap(array[i],array[minimum]);
    }
}

void Display(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}