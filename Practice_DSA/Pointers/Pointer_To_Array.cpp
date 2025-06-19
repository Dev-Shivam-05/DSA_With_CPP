#include<iostream>
#include<vector>
using namespace std;

int Traversal(vector<int>& array,int size,int key)
{
    // Taken A Normal Loop
    for (int i = 0; i < size; i++)
    {
        // Checking If The Searched Element Is Matched In The Array 
        if (array[i] == key)
        {
            // If Yes Returning The Index Where The VAlue Is Matches
            return i;
        }
    }
    // If No Returning -1
    return -1;
};

int main()
{
    // Taking The Size Of The Vector 
    int size,key,num;
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    // Delcaring An Vector
    vector<int> array;
    // Taking Input Of Array Elements 
    cout << "Enter " << size << " Elements :- " << endl;
    for (int i=0; i< size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> num;
        array.push_back(num);
    }

    cout << "Enter The Element To Search :- ";
    cin >> key;
    // Calling Traversal Function
    int result = Traversal(array,size,key);
    // Cheking If The Result Have Recevied An Index Or Not Avaible (-1)
    if (result >= 0 && result <= array.size())
    {
        // If Yes The Displaying The Index With Message
        cout << "The Element " << key << " Is Founded At " << result << "  Index." << endl;
    }
    else
    {
        // If No Then Displaying Not Fount Message
        cout << "The Element " << key << " Is Not Founded In The Array.";
    }

    return 0;
}