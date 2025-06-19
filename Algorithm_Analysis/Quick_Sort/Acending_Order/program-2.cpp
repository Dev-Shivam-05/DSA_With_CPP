#include<iostream>
using namespace std;

class QuiickSort
{
public:
    int Partition(int array[],int start,int end)
    {
        int Pivot = array[end];
        int i = start - 1;

        for (int j = start; j < end; j++)
        {
            if (array[j] <= Pivot)
            {
                swap(array[++i],array[j]);
            }
        }
        swap(array[++i],array[end]);
        return i;
    }

    void Quick(int array[],int start,int end)
    {
        if (start >= end)
        {
            return;
        }
        
        int Pivot = Partition(array,start,end);

        Quick(array,start,Pivot - 1);
        Quick(array,Pivot + 1,end);
    }

    void DisplayArray(int array[],int size)
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
    QuiickSort obj;
    int size;

    cout << "Enter Teh Size Of The Array :- ";
    cin >> size;

    int* array = new int[size];

    cout << endl << "Enter " << size << " Ekements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }
 
    cout << endl << "The Unsorted Array is :- ";
    obj.DisplayArray(array,size);

    obj.Quick(array,0,size - 1);
    
    cout << endl << "The Sorted Array Is :- ";
    obj.DisplayArray(array,size);
    return 0;
}