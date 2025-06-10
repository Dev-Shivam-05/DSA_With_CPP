#include<iostream>
using namespace std;

void InsertionSort(int [],int);
void Display(int [],int);

int main()
{
    int size;

    cout << endl << "Enter The Size Of Array :- ";
    cin >> size;

    int array[size];
    
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }

    cout << endl << "The Orignal Is Array :- ";
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
        for (int j = i; j < 0 && array[j - 1] > array[j])
        {
            swap(array[j],array[j - 1]);
        }
    }
}

void Display(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}