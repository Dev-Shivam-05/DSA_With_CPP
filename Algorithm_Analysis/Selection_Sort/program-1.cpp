#include<iostream>
using namespace std;

class Catogrizing
{
public:
    void DisplayingArray(int array[],int size)
    {
        cout << endl << "The Current Array Is :- ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void SelectionSort(int array[],int size)
    {
        for (int i = 0; i < size; i++)
        {
            int minimum = i;
            for (int j = i + 1; j < size; j++)
            {
                if (array[minimum] > array[j])
                {
                    minimum = j;
                }
            }
            swap(array[i],array[minimum]);
        }
        cout << endl << "Selection Sort Sucessfully Compelete";
    }

    void MergeSort(int array[],int start,int mid,int end)
    {
        int* temp_array = new int[end - start + 1];

        int i = start,j = mid + 1,k = 0;
        while (i <= mid && j <= end)
        {
            if (array[i] <= array[j])
            {
                temp_array[k++] = array[i++];
            }
            else
            {
                temp_array[k++] = array[j++];
            }
        }

        while (i <= mid)
        {
            temp_array[k++] = array[i++];
        }
        while (j <= end)
        {
            temp_array[k++] = array[j++];
        }
        
        for (int k = 0; k < end; k++)
        {
            array[start + k] = temp_array[k];
        }
        
        cout << endl << "Merge Sort Is Sucessfully Executed." << endl;
    }

    void Merge_Sort(int array[],int start,int end)
    {   
        if (start >= end) return;

        int mid = start + (end - start) / 2;

        Merge_Sort(array,start,mid);
        Merge_Sort(array,mid + 1,end);
        MergeSort(array,start,mid,end);
    
    }

    int LinearSearch(int array[],int size,int key)
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i] == key)
            {
                return i;
            }            
        }
        return -1;
    }

    int BinarySearch(int array[],int start,int end,int key)
    {
        int mid = start + (end - start) / 2;

        for (int i = 0; i < end; i++)
        {
            if (array[mid] == key)
            {
                return i;
            }
            else if (key < array[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }   
        }
        return -1;
    }
};

int main()
{
    Catogrizing obj;
    int size;
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    int* array = new int[size];

    cout << endl << "Enter " << size << " Elements :- "<< endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }

    int choice,key,index;
    cout << endl << "Welcome To Algorithm Checker !" << endl;

    do
    {
        cout << endl << "=========== Menu ===========" << endl;
        cout << "1. Selection Sort." << endl;
        cout << "2. Merge Sort." << endl;
        cout << "3. Linear Search." << endl;
        cout << "4. Binary Search." << endl;
        cout << "5. Display Array." << endl;
        cout << "0. Exit The Program." << endl;

        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.SelectionSort(array,size);
            break;
        
        case 2:
            obj.Merge_Sort(array , 0 , size - 1);
            break;
        
        case 3:
            obj.DisplayingArray(array,size);
            cout << "Enter An Element To Search (Linear):- ";
            cin >> key;
            index = obj.LinearSearch(array,size,key);
            if (index >= 0)
            {
                cout << endl << "The Element Is Fouded At " << index << "Th Index." << endl;
            }
            else
            {
                cout << endl << "The Element Not Found!." << endl;
            }
            break;
        
        case 4:
            obj.DisplayingArray(array,size);
            cout << endl << "Note :- " << endl << "The Array Must Be Sorted To Search Through Binary." << endl;
            cout << "Enter Any Element To Search (Binary) :- ";
            cin >> key;
            index = obj.BinarySearch(array,0,size-1,key);
            if (index >= 0)
            {
                cout << endl << "The Element " << key << " Is Founded At " << index << " Index." << endl;
            }
            else
            {
                cout << endl << "The Element " << key << " Is Not Founded In The Array.";
            }
            break;k

        case 5:
            obj.DisplayingArray(array,size);
            break;
        
        case 0:
            cout << endl << "Thanks For Using Program...." << endl;
            cout << "Press Enter to close...";
            cin.ignore();
            cin.get();
            break;

        default:
            break;
        }
    }
    while (choice != 0);
    
    return 0;
}