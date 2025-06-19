#include<iostream>
using namespace std;

void InsertionSort(int [],int);
void Swapit(int,int);
void Display(int [],int);


int main()
{
    int size;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    int array[size];

    cout << endl << "Enter " << size << " Values For :- " << endl;
    for (int i=0; i<size; i++)
    {
        cout << "Array " << i + 1 <<" :- ";
        cin >> array[i];
    }

    InsertionSort(array,size);
    Display(array,size);
    return 0;        
}

void InsertionSort(int array[],int size)
{
    int pass = 1;
    while (pass < size)
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i] > array[i+1])
            {
                Swapit();
            }
        }
        pass++;
    }
}

void Swapit(int a,int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void Display(int array[],int size)
{
    cout << endl << "The Sorted Array Is :- ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }   
}