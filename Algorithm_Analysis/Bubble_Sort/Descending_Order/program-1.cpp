#include<iostream>
using namespace std;

class BubbleSort
{
public:
    void Bubble_Sort(int array[],int size)
    {
        // Taking Pass To COunt Itrations
        int pass = 1;
        while (pass <= size)
        {
            for (int i = 0; i < size - pass; i++)
            {
                // Checking 1st element of array is Smaller(<=) Than next element of array 
                if (array[i] <= array[i + 1])
                {
                    // if Yes Than Swap Them
                    swap(array[i],array[i + 1]);
                }
            }
            // increseing Pass
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
    // Creatinng Object To Access Their Methods
    BubbleSort obj;
    int size;

    // Taking Input Of Size Of Array
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    // Declaring And Initilizing A Dynamic Array 
    int* array = new int[size];

    // Taking Input Of Array 
    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }
    
    // Displaying The Unsorted Array 
    cout << endl << "The Unsorted Array Is :- ";
    obj.DisplayArray(array,size);

    // Sortingg.... Array
    obj.Bubble_Sort(array,size);

    // Displaying The Sorted Array
    cout << endl << "The Sorted Array Is :- ";
    obj.DisplayArray(array,size);

    return 0;
}