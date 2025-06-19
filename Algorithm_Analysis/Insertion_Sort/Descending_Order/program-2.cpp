#include<iostream>
#include<vector>
using namespace std;

class InsertionSort
{
public:
    void Insertion_Sort(vector<int>& array)
    {
        int key,j;
        for (int i = 1; i < array.size(); i++)
        {
            key = array[i];
            j = i - 1;

            while (j >= 0 && array[j] <= key)
            {
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = key;
        }
    }

    void DisplayList(vector<int>& array)
    {
        for (int i = 0; i < array.size(); i++)
        {
            cout << array.at(i) << " ";
        }
        cout << endl;
    }
};

int main()
{
    // TakinG An Object To Access All The Methods 
    InsertionSort obj;
    int size,num;

    // Taking Input Of Size Of Vector 
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    // Declaring Vector
    vector<int> array;

    // Taking Input Of Elelments Of Vector
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> num;
        array.push_back(num);
    }
    
    // Displaying the Unsorted Vector
    cout << endl << "The Unsorted Array Is :- ";
    obj.DisplayList(array);

    // Sorting.... Vector
    obj.Insertion_Sort(array);

    // Displaying The Sorted Vector
    cout << endl << "The Sorted Array Is :- ";
    obj.DisplayList(array);

    return 0;
}