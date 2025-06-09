#include<iostream>
using namespace std;

void PrintArray(int [],int);
void BubbleSort(int [],int);

int main()
{
    int size;
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    int array[size];

    cout << "Enter The Value For :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Array["<< i <<"] :- ";
        cin >> array[i];
    }
    
    int choice;
    do
    {
        cout << endl << "==== Program's ====" << endl;
        cout << "Press 1 To Print Orignal Array." << endl;
        cout << "Press 2 To Sort Array." << endl;
        cout << "Press 3 To Print Sort Array." << endl;
        cout << "Press 0 To Exit." << endl;

        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "==== Your Program Is Sucessfully Executed. ====" << endl;
            break;
        
        case 1:
            cout << endl << "The Orignal Array Is :- ";
            for (int i = 0; i < size; i++)
            {
                cout << array[i] << " ";
            }
            break;

        case 2:
            BubbleSort(array,size);
            break;

        case 3:
            BubbleSort(array,size);
            PrintArray(array,size);
            break;

        default:
            cout << endl << "==== Wrong Choice. ====" << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}

void PrintArray(int arr[],int size)
{
    cout << endl << "The Array Is :- ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[],int size)
{
    int pass = 1;
    while (pass < size)
    {
        for (int i = 0; i < size - pass; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                arr[i] = arr[i] + arr[i + 1]; 
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1]; 
            }
            cout << arr[i] << " ";
        }
        cout << endl;
        pass++;
    }
    cout << endl;
}
