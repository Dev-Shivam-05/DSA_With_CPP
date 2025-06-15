#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int>& array, int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (array[i] >= array[j])
            temp.push_back(array[i++]);
        else
            temp.push_back(array[j++]);
    }

    while (i <= mid)
        temp.push_back(array[i++]);

    while (j <= end)
        temp.push_back(array[j++]);

    for (int k = 0; k < temp.size(); k++)
        array[start + k] = temp[k];
}

void Merge_Sort(vector<int>& array, int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;
    Merge_Sort(array, start, mid);
    Merge_Sort(array, mid + 1, end);
    Merge(array, start, mid, end);
}

void PrintVector(const vector<int>& array)
{
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int size, num;

    cout << "Enter The Size Of The arrayay :- ";
    cin >> size;

    vector<int> array;
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Vector[" << i << "] :- ";
        cin >> num;
        array.push_back(num);
    }

    cout << endl << "The Unsorted Vector Is :- ";
    PrintVector(array);

    Merge_Sort(array, 0, size - 1);

    cout << endl << "The Sorted Vector Is :- ";
    PrintVector(array);

    return 0;
}
