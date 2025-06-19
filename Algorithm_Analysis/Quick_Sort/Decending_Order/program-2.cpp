#include<iostream>
using namespace std;

int Partition(int array[],int start,int end)
{
    // Taking Pivot As Last Element
    int Pivot = array[end];
    // taking i For Larger Elements Index
    int index = start - 1;

    for (int j = start; j < end; j++)
    {
        // Checking Which Elements Is Larger(>=) Than Pivot
        if (array[j] >= Pivot)
        {
            // Swaping To Put The Smaller value In Left
            swap(array[++index],array[j]);
        }
    }
    // Give Correct Position To Pivot
    swap(array[++index],array[end]);
    
    // Returning the Index Where We Putted Pivot
    return index;
}

void QuickSort(int array[],int start,int end)
{
    // To Return 
    if (start >= end) return;

    // Finding Pivot Index Throught Partion Funcion 
    int PivotIndex = Partition(array,start,end);
    
    // For 1st Halves
    QuickSort(array,start,PivotIndex - 1);
    //For 2nd Halves
    QuickSort(array,PivotIndex + 1,end);
}

void DisplayArray(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    // Taking The Size Of The Array
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    //Created A Dynamic Array 
    int* array = new int[size];

    // Taking Input Of Array Elements
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }
    
    // Displaying The Unsorted Array
    cout << endl << "The Unsorted Array Is :- ";
    DisplayArray(array,size);

    // Sorting Array
    QuickSort(array , 0 , size - 1);

    // Displaying The Sorted Array 
    cout << endl << "The Sorted Array Is :- ";
    DisplayArray(array,size);
    return 0;
}