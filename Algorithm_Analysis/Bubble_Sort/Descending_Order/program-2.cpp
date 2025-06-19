#include<iostream>
#include<vector>
using namespace std;

class BubbleSort
{
public:
    void Bubble_Sort(vector<int>& array)
    {
        // Taking Pass To Coun The itrations
        int Pass = 1;

        while (Pass <= array.size())
        {
            for (int i = 0; i < array.size(); i++)
            {
                // Checking If i th Element Is Smaller(<=) Than i + 1 th Element 
                if (array[i] <= array[i + 1])
                {
                    // If Yess Than Swap Them
                    swap(array[i],array[i + 1]);
                }
            }
            // Increasing Pass
            Pass++;
        }
    }

    void Display(vector<int>& array)
    {
        for (int i = 0; i < array.size(); i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    // taking an object to Access All Public Methods
    BubbleSort obj;
    int size,num;

    // Taking Input Of Size Of The Vector
    cout << "Enter The Size Of The Vector :- ";
    cin >> size;

    // Declaring A Vector
    vector<int> array;

    // Taking Input Of Elements Of Vector
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> num;
        array.push_back(num);
    }
    
    // Displaying The Unsorted Vector
    cout << "The Unsorted Array Is :- ";
    obj.Display(array);

    // Sorting.... Vector
    obj.Bubble_Sort(array);

    // Displaying The Sorted Vector
    cout << "The Sorted Array Is :- ";
    obj.Display(array);

    return 0;
}