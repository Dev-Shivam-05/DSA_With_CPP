#include<iostream>
using namespace std;

class InsertionSort
{
public:
    void Insertion_Sort(int array[],int size)
    {
        int key = 1;
        int i = 0;
        while (i <= size)
        {
            for (int j = 0; j < size; j++)
            {
                if (array[key] > array[i])
                {
                    swap(array[key++],array[i]);
                }
            }
            i++;
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
    InsertionSort obj;
    int size;

    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    int* array = new int[size];

    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }
    
    cout << endl << "The Unsorted Array Is :- ";
    obj.DisplayList(array,size);

    obj.Insertion_Sort(array,size);

    cout << endl << "The Sorted Array Is :- ";
    obj.DisplayList(array,size);
    return 0;
}