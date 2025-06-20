#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* link;

    Node(int data)
    {
        this->data = data;
        this->link = nullptr;
    }
};

class LinkedList
{
public:
    Node* head;
    int size;

    LinkedList()
    {
        this->head = nullptr;
        this->size = 0;
    }

    void InsertAtFront ()
    {
        int data;
        cout << "Enter The Data To Insert At Front :- ";
        cin >> data;

        Node* newNode = new Node(data);
        newNode->link = this->head;
        this->head = newNode;
        this->size++;
    }

    void InsertAtEnd ()
    {
        int data;
        cout << "Enter The Data To Insert At End :- ";
        cin >> data;
    
        Node* newNode = new Node(data);

        if (this->head == nullptr)
        {
            this->head = newNode;
        }
        else
        {
            Node* ptr = this->head;
            while (ptr->link != nullptr)
            {
                ptr = ptr->link;
            }
            ptr->link = newNode;
            this->size++;
        }
    }

    void InsertAtIndex ()
    {
        int index,data;
        cout << "Enter Index To Insert The Value :- ";
        cin >> index;
        if (index < 0 || index > size)
        {
            cout << "Index Out Of Bound...." << endl;
            while (index < 0 && index > size)
            {
                cout << "Enter Index To Insert The Value :- ";
                cin >> index;
            }
        }
        else
        {
            cout << "Enter Data To Insert At " << index << " Index :- ";
            cin >> data;
            Node* newNode = new Node(data);
            Node* ptr = this->head;
            for (int i = 0; i < index - 1; i++)
            {
                ptr = ptr->link;
            }
            newNode->link = ptr->link;
            ptr->link = newNode;
            this->size++;
        }
    }

    void DeleteAtFront ()
    {
        if (this->head == nullptr)
        {
            cout << "The List Is Already Empty." << endl;
        }
        else
        {
            this->head = this->head->link;
        }
        this->size--;
    }

    void DeleteAtEnd ()
    {
        if (this->head == nullptr)
        {
            cout << "The List Is Already Empty." << endl;
        }
        else
        {
            Node* ptr = this->head;
            while (ptr->link->link != nullptr)
            {
                ptr = ptr->link;
            }
            ptr->link = nullptr;
            this->size--;
        }
    }

    void DeleteAtIndex ()
    {
        int index;
        cout << "Enter Index To Delete :- ";
        cin >> index;
        if (index <= 0 && index > this->size)
        {
            cout << endl << "Index Is Out Of Bound....Please Try Again" << endl;
            while (index < 0 && index > size)
            {
                cout << "Enter Index To Delete :- ";
                cin >> index;
            }
        }

        if (this->head == nullptr)
        {
            cout << endl << "The List Is Already Empty";
        }
        else
        {
            Node* ptr = this->head;
            for (int i = 0; i < index - 1; i++)
            {
                ptr = ptr->link;
            }
            ptr->link = ptr->link->link;
        }
    }

    void UpdateAtIndex ()
    {
        int index,data;
        cout << "Enter Index To Update :- ";
        cin >> index;

        if (index < 0 && index > this->size)
        {
            cout << "Index Is Out Of Bound...." << endl;
            while (index < 0 && index > this->size)
            {
                cout << "Enter Index To Update :- ";
                cin >> index;
            }
        }
        
        if (this->head == nullptr)
        {
            cout << endl << "The List Is Already Empty." << endl;
        }
        else
        {
            cout << "Enter Data To Update At " << index << " Index :- ";
            cin >> data;
            Node* ptr = this->head;
            for (int i = 0; i < index - 1; i++)
            {
                ptr = ptr->link;
            }
            ptr->link->data = data;
        }
        
    }

    void DisplayLinkedList ()
    {
        if (this->head == nullptr)
        {
            cout << "The List Is ALready Empty.." << endl;
        }
        else
        {
            cout << endl << "Current Linked List Is :- ";
            Node* ptr = this->head;
            while (ptr != nullptr)
            {
                cout << ptr->data << " -> ";
                ptr = ptr->link;
            }
            cout << "NULL" << endl;
        }
    }

void ToArrayAndSort()
{
    int* array = new int[this->size]; 
    Node* ptr = this->head;
    int i = 0;

    // Step 1: Copy list to array
    while (ptr != nullptr)
    {
        array[i++] = ptr->data;
        ptr = ptr->link;
    }

    // Step 2: Sort the array using Merge Sort
    MergeSort(array, 0, this->size - 1);

    // Step 3: Copy sorted array back to the list
    ptr = this->head;
    i = 0;
    while (ptr != nullptr)
    {
        ptr->data = array[i++];
        ptr = ptr->link;
    }

    delete[] array;  // Clean memory
}

    // void ToArray()
    // {
    //     int* array = new int[this->size]; 
    //     Node* ptr = this->head;
    //     for (int i = 0; ptr != nullptr; i++)
    //     {
    //         array[i] = ptr->data;
    //         ptr = ptr->link;
    //     }
    //     MergeSort(array, 0, this->size - 1);
    
    //     // Step 3: Copy sorted array back to the list
    //     ptr = this->head;
    //     int i = 0;
    //     while (ptr != nullptr)
    //     {
    //         ptr->data = array[i++];
    //         ptr = ptr->link;
    //     }
    
    //     delete[] array;
    // }

    void MergeSort(int* array,int start,int end)
    {
        if (start >= end) return;

        int mid = start + (end - start) / 2;

        MergeSort(array,start,mid);
        MergeSort(array,mid + 1,end);
        Merge(array,start,mid,end);
    }

    void Merge(int* array,int start,int mid,int end)
    {
        int* temp = new int[this->size];
        int i = start,j = mid + 1,k = 0;

        while (i <= mid && j <= end)
        {
            if (array[i] < array[j])
            {
                temp[k++] = array[i++];
            }
            else
            {
                temp[k++] = array[j++];
            }
        }

        while (i <= mid)
        {
            temp[k++] = array[i++];
        }

        while (j <= end)
        {
            temp[k++] = array[j++];
        }
        
        for (int x = 0; x < k; x++)
        {
            array[start + x] = temp[x];
        }
    }
};

int main()
{
    LinkedList obj;
    int choice;
    cout << endl << "Welcome To Linked List Program." << endl;
    do
    {
        cout << endl <<  "========== Menu ==========" << endl;
        cout << "1. Insert At Front." << endl;
        cout << "2. Insert At End." << endl;
        cout << "3. Insert At Index." << endl;
        cout << "4. Delete At Front." << endl;
        cout << "5. Delete At End." << endl;
        cout << "6. Delete At Index." << endl;
        cout << "7. Update At Index" << endl;
        cout << "8. Display List." << endl;
        cout << "9. Sort List (Merge Sort)." << endl;
        cout << endl <<  "====================" << endl;

        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.InsertAtFront();
            break;
        
        case 2:
            obj.InsertAtEnd();
            break;
                
        case 3:
            obj.InsertAtIndex();
            break;
                
        case 4:
            obj.DeleteAtFront();
            break;
                
        case 5:
            obj.DeleteAtEnd();
            break;
                
        case 6:
            obj.DeleteAtIndex();
            break;
                
        case 7:
            obj.UpdateAtIndex();
            break;

        case 8:
            obj.DisplayLinkedList();
            break;
        
        case 9:
            obj.ToArrayAndSort();
            break;
        
        case 0:
            cout << "Program Is Sucessfully Executed...." << endl;
            cout << endl << "Press Enter To Exit....";
            cin.ignore();
            cin.get();
            break;

        default:
            cout << "Wrong Choice...";
            break;
        }
    } while (choice != 0);
    
    return 0;
}