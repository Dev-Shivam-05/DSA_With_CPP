#include<iostream>
using namespace std;

class BubbleSort
{
public:
    void Bubble_Sort(int array[],int size)
    {
        int pass = 1;
        while (pass <= size)
        {
            for (int i = 0; i < size - pass; i++)
            {
                if (array[i] <= array[i + 1])
                {
                    swap(array[i],array[i + 1]);
                }
            }
            pass++;
        }
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
    BubbleSort obj;
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
    obj.DisplayArray(array,size);

    obj.Bubble_Sort(array,size);

    cout << endl << "The Sorted Array Is :- ";
    obj.DisplayArray(array,size);
    return 0;
}