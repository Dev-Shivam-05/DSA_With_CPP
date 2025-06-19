#include<iostream>
#include<vector>
using namespace std;


// Declarig Funtions
void SelectionSort(vector<int>&);
void Display(vector<int>&);

int main()
{
    int size,num;

    // Taking Input Of The Size Of The Vector
    cout << "Enter The Size Of Vector :- ";
    cin >> size;

    // Declaring Vector
    vector<int> array;

    // Taking Input Of elements of Vector 
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> num;

        array.push_back(num);
    }

    // Displaying The Unsorted Vector
    cout << endl << "The Unsorted Array Is :- ";
    Display(array);

    // Selection Sorting.... The Vector
    SelectionSort(array);

    // Displaying The Sorted Vector 
    cout << endl << "The Sorted Array Is :- ";
    Display(array);

    return 0;
}

void SelectionSort(vector<int>& array)
{
    // Taken A Normal Loop
    for (int i = 0; i < array.size(); i++)
    {
        // Given Minimum = i To Target an Index
        int minimum = i;

        // Taken A j Loop To Target Next element
        for (int j = i + 1; j < array.size(); j++)
        {
            // Checkingg If minimum index element Is Smaller ha n I's nextt Idex ?
            if (array[minimum] < array[j])
            {
                // If Yes minimum index will be j
                minimum = j;
            }
        }
        // Putting Smallest Index To It's Original Position
        swap(array[i],array[minimum]);
    }   
}

void Display(vector<int>& array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}