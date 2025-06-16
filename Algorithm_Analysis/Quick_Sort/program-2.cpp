#include<iostream>
using namespace std;

class QuiickSort
{
public:
    int Partition(int &array[],int start,int end)
    {
        int Pivot = array[end];
        int i = start - 1;

        for (int j = start; j < end; j++)
        {
            if (array[j] > Pivot)
            {
                swap(array[++i],array[j])
            }
        }
        swap(array[++i],array[end]);
        return i;
    }

    void Quick(int &array[],int start,int end)
    {
        if (start >= end)
        {
            return;
        }
        
        int Pivot = Partition(array,start,end);

        Quick(array,start,Pivot - 1);
        Quick(array,Pivot + 1,end);
    }
};

int main()
{
    QuiickSort obj;
    int size;

    cout << "Enter Teh Size Of The Array :- ";
    cin >> size;

    int array[size];

    cout << endl << "Enter " << size << " Ekements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }
    obj.Quick(array,0,size - 1);

    return 0;
}