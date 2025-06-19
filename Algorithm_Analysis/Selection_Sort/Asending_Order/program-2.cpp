#include<iostream>
#include<vector>
using namespace std;

// Declaring Functions To Used
void SelectionSort(vector<int>&);
void Display(vector<int>&);

int main()
{
    int size,num;

    // Taking The Size Of The Vector
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    // Declaring Vector
    vector<int> array;

    // Taking Input Of Elements Of Vector
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i=0; i<size; i++)
    {
        cout << "Array["<< i <<"] :- ";
        cin >> num;
        array.push_back(num);
    }

    // Displaying The Unsorted Vector
    cout << endl << "The Unsorted Array Is :- ";
    Display(array);

    // Selection Sorting..... The Vecctor
    SelectionSort(array);

    // Displaying The Sorted Vector
    cout << endl << "The Sored Array Is :- ";
    Display(array);

    return 0;
}

// Defining The Funtion !
void SelectionSort(vector<int>& array)
{
    // Taken A Normal Loop That Goes From st Index To The Last Index Of Vector
    for (int i = 0; i < array.size() - 1; i++)
    {
        int minimum = i;

        // Taken A j Loop To Perform Comparision
        for (int j = i + 1; j < array.size(); j++)
        {
            // Comparing And Finding The Smaller value
            if (array.at(j) < array.at(minimum))
            {
                // If True Then Minimum Will Equal Too J
                minimum = j;
            }
        }
        // Arragnging The Mininmum At His Corret Postion
        swap(array.at(i),array[minimum]);        
    }
}

void Display(vector<int>& array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array.at(i) << " ";
    }
    cout << endl;
}