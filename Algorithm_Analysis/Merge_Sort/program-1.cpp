#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& array,int start,int mid,int end)
{
    vector<int> temp;
    int i = start , j = mid + 1;

    while (i <= mid)
    {
        if (array[i] > array[j])
        {
            temp.push_back(array[i++]);
        }
        else
        {
            temp.push_back(array[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(array[i++]);
    }

    while (j <= end)
    {
        temp.push_back(array[j++]);
    }

    for (int k = 0; k < temp.size(); k++)
    {
        array[start + k] = temp[k];
    }
    
}

void merge_sort(vector<int>& array,int start,int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start - (end - start) / 2;

    merge_sort(array,start,mid);
    merge_sort(array,mid + 1,end);
    merge(array,start,mid,end);
}

void Display(vector<int>& array,int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array.at(i) << " ";
    }
}

int main()
{
    int size,num;

    cout << "Enter The Size Of Array :- ";
    cin >> size;

    vector<int> array(size);

    cout << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }

    cout << endl << "The Unsorted Array Is :- ";
    Display(array,size);
    
    merge_sort(array , 0 , size - 1);

    cout << endl << "The Sorted Array Is :- ";
    Display(array,size);

    return 0;
}