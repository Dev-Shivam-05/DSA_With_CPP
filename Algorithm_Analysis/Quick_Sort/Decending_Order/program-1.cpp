#include<iostream>
#include<vector>
using namespace std;

class QuickSort
{
public:
    int Partition(vector<int>& array,int start,int end)
    {
        // Taking Pivot Last Element Of Vector
        int Pivot = array[end];
        // Taking i As Smallest Element Index
        int index = start - 1;

        for (int j = start; j < end; j++)
        {
            // Checking All The Larger(>=) Elements Form Pivot
            if (array[j] >= Pivot)
            {
                // Using Swap Arrangeing Smaller Values In Left
                swap(array[++index],array[j]);
            }
        }
        // Assigning Correct Position To Pivot
        swap(array[++index],array[end]);

        // Returing The Postion Where We Added Pivot
        return index;
    }

    void Quick_Sort(vector<int>& array,int start,int end)
    {
        // Retur Statement For Base Case Already Sorted
        if(start >= end) return;

        // Intilizing Pivot Index By Patrition Function
        int PivotIndex = Partition(array,start,end);

        // For 1st Halves
        Quick_Sort(array,start,PivotIndex - 1);
        // For 2nd Halves
        Quick_Sort(array,PivotIndex + 1,end);
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
    QuickSort obj;
    int size,num;

    //Taking The Size Of Vector
    cout << "Enter The Size Of The Array :- ";
    cin >> size;
    
    // Declaring Vector
    vector<int> array;

    // Taking Input Of Vector Elements
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> num;
        array.push_back(num);
    }

    // Displaying The Unsorted Vector
    cout << endl << "The Unsorted Array Is :- ";
    obj.DisplayList(array);

    // Sorting.... Vector
    obj.Quick_Sort(array , 0 , size - 1);

    // Displying The Sorted Vector
    cout << endl << "The Sorted Array Is :- ";
    obj.DisplayList(array);
    
    return 0;
}