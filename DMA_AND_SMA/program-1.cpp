#include<iostream>
using namespace std;

// Global Variable Declar And Stores In global Area !!
int global_variable = 10; 

// Functions Local Varible Which Are Stored In Stack
int get(int a, int b) 
{
    return a + b;
}

int main()
{
    // Declared Static Variables Which Will Stored in Global / Static Area's
    int num_1 = 2,num_2 = 8;    

    // Declared A Pointer Which Will Stored In Heap 
    int* p;
    p = new int(9);

    // Taking Size As Dynamic Variable Which Will Gonna Stored In Heap Memory
    int size;
    cout << "Enter the Size Of Array :- ";
    cin >> size; 

    // Creating An Array Pointer 
    int* a;
    a = new int [size];
    

    for (int i = 0; i < size; i++)
    {
        a[i] = i * 20;
    }

    for (int i = 0; i < size; i++)
    {
       cout << "Array Of " << i << " is :- " << a[i] << endl;
    }

    delete(p);
    delete[] a;
    
    return 0;
}