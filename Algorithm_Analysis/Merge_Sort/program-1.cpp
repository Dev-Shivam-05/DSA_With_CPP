#include<iostream>
using namespace std;

class Merge
{
protected:
    int array[]
    int size;
public:
    Merge(int array[],int size)
    {
        this->array = this->array;
        this->size = this->size;
    }
    void merge(int array[],int size)
    {
        int left = 0,
        right = size - 1,
        mid = (left - right) / 2;

        int size_array_1 = left + mid;
        int size_array_2 = (mid + 1) - right;

        int temp_array_1[size_array_1];
        int temp_array_2[size_array_2];

        for (int i = 0; i < size_array_1; i++)
        {
            temp_array_1[i] = array[i];
        }
        
        for (int i = 0; i < size_array_2; i++)
        {
            temp_array_2[i] = array[i];
        }

        // For 1st Part  
        while (left > mid)
        {
            if (array[left] > array[left + 1])
            {
                swap(array[left],array[left + 1]);
            }
        }
        
        // For 2nd Part  
        while (mid + 1)
        {
            if (array[left] > array[left + 1])
            {
                swap(array[left],array[left + 1]);
            }
        }
        
    }
};

class MergeSort : public Merge
{
public:

};

int main()
{
    int size; 

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    int array[size];

    cout << endl << "Enter " << size << " Elements In Array Of :- " << endl << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i + 1 << "] :- ";
        cin >> array[i];
    }
    
    return 0;
}