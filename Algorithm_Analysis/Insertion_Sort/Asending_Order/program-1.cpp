#include<iostream>
using namespace std;

class InsertionSort
{
public:
    void Insertion_Sort(int array[],int size)
    {
        // Declaring j And k
        int key,j;
        for (int i = 1; i < size; i++)
        {
            // initialzing k For i th element of Array
            key = array[i];
            //intialzing j to i - 1 for beforehand index
            j = i - 1;
            
            // putted conding in loop if array[j] Is Smaller(<) Than array[key] 
            while (j >= 0 && array[j] < key)
            {
                // If Yes Set Array[j] Next To Array[j]
                array[j + 1] = array[j];
                j--;
            }
            // giving Array[j + 1] = key
            array[j + 1] = key;
        }
    }
    
    void DisplayList(int array[],int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Taking Object To Access All Public Methods
    InsertionSort obj;
    int size;

    // Taking Input Of Size Of Array
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    // eclaring A Dynamic Array
    int* array = new int[size];

    // Taking Input Of Elements Of Array
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }
    
    // DIsplaying The Unsorted Array
    cout << endl << "The Unsorted Array Is :- ";
    obj.DisplayList(array,size);

    // Sorting.... Array
    obj.Insertion_Sort(array,size);

    // Displaying The Sorted Array
    cout << endl << "The Sorted Array Is :- ";
    obj.DisplayList(array,size);

    return 0;
}