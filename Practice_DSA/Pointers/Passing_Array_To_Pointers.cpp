#include<iostream>
using namespace std;

// Declaring And Defining A Max Finding Funtion
int FindMax(int array[],int size)
{
    // TakinG MAx As 0 To Compare With Array Elements
    int max = 0;
    // Taken An Loop To Access All The Elements Of Array
    for (int i = 0; i < size; i++)
    {
        // Checking If Any Elemnts is Greater Than MAx Or Not
        if (array[i] > max)
        {
            // If Yess Then Assigning The Element To MAx To Compare With Other Elements
            max = array[i];
        }
    }
    // Returning The Final Largest Value
    return array[max];
}

// Declaring And Defining A Display Funtion Used To Display The Array
void DisplayArray(int array[],int size)
{
    // Prininng A Message 
    cout << endl << "Current Array Is :- ";
    // Taken A Loop To Access And Print All The Elements Avaibel In The Array 
    for (int i = 0; i < size; i++)
    {
        // Printing The Elements Avaible In The Array
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Taking Input Of Size Of The Array
    int size;
    cout << "ENter The Size Of Array :- ";
    cin >> size;

    // Declared A Dynamic Array
    int* array = new int[size];
    // Taking Input Of Elemens Of Array 
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }

    // Displaying The Array
    DisplayArray(array,size);

    // Displaying The Largest Element With A Message
    cout << endl << "The Largest Element Among Array Is :- " << FindMax(array,size) << endl;

    return 0;
}