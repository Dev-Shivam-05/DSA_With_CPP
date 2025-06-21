#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* link;
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

    void InsertAtFront()
    {
        int data;
        cout << "Enter The Data To Add In Front Of The List :- ";
        cin >> data;
        Node* newNode = new Node(data);
        newNode->link = this->head;
        this->head = newNode;
        this->size++;
    }
    
    void InsertAtEnd()
    {
        int data;
        cout << "Enter The Data To Add In End Of The List :- ";
        cin >> data;

        Node* newNode = new Node(data);
        if (this->head == nullptr)
        {
            this->head = newNode;
            this->size++;
        }
        else
        {
            Node* ptr = this->head;
            while (ptr->link == nullptr)
            {
                ptr = ptr->link;
            }
            ptr->link = newNode;
            this->size++;
        }
    }

    void InsertAtIndex()
    {
        int index,data;
        cout << "Enter Index To Insert :- ";
        cin >> index;
        if (index < 0 || index > this->size)
        {
            cout << "Index Out Of Bounds.... Please Try Again";
            while (index < 0 || index > this->size)
            {
                cout << "Enter Index To Insert :- ";
                cin >> index;
            }
        }

        if (this->head == nullptr)
        {
            InsertAtFront();
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

    void DeleteAtFront()
    {
        if (this->head == nullptr)
        {
            cout << "The List Is Already Empty Nothing To Delete." << endl;
        }
        else
        {
            this->head = this->head->link;
            this->size--;
        }
    }

    void DeleteAtEnd()
    {
        if (this->head == nullptr)
        {
        cout << "The List Is Already Empty Nothing To Delete." << endl;
        }
        else
        {
            Node* ptr = this->head;
            while (ptr->link->link != nullptr)
            {
                ptr = ptr->link;
            }
            ptr->link = nullptr;
        }
    }

    void DeleteAtIndex()
    {
        if (this->head == nullptr)
        {
            cout << "The List Is Already Emmpty There Is Nothinng To Delete.." << endl;
        }
        else
        {
            int index,data;
            cout << "Enter Index To Delete :- ";
            cin >> index;
            if (index < 0 || index > this->size)
            {
                cout << "Index Out Of Bounds.... Please Try Again";
                while (index < 0 || index > this->size)
                {
                    cout << "Enter Index To Delete :- ";
                    cin >> index;
                }
            }
            else
            {
                cout << "Enter Data To Delete At " << index << " Index :- ";
                cin >> data;
                Node* newNode = new Node(data);
                Node* ptr = this->head;
                for (int i = 0; i < index - 1; i++)
                {
                    ptr = ptr->link;
                }
                ptr->link = ptr->link->link;
                this->size--;
            }
        }
    }

    void Update()
    {
        int index,data;

        cout << "Enter Index To Update In List :- ";
        cin >> index;

        if (index < 0 || index > this->size)
        {
            cout << "Index Is Out Of Bound... Please Try Again" << endl;
            while (index < 0 || index > this->size)
            {
                cout << "Enter Index To Update In List :- ";
                cin >> index;
            }
        }

        if (this->head == nullptr)
        {
            InsertAtFront();
        }
        else
        {
            Node* ptr = this->head;

            cout << "Enter Data To Update At " << index << " Index :- ";
            cin >> index;
        
            for (int i = 0; i < index -1; i++)
            {
                ptr = ptr->link;
            }
            ptr->link->data = data;
        }
    }

    void DisplayList()
    {
        Node* ptr = this->head;
        cout << endl << "The Current List Is :- ";
        for (int i = 0; i < this->size; i++)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->link;
        }
        cout << "NULL" << endl;
    }

    void ToArraySort()
    {
        int* array = new int[this->size];
        Node* ptr = this->head;
        int i = 0;

        while (ptr == nullptr)
        {
            array[i++] = ptr->data;
            ptr - ptr->link;            
        }
        MergeSort(array , 0 , this->size - 1);

        ptr = this->head;
        i = 0;
        while (ptr != nullptr)
        {
            ptr->data = array[i++];
            ptr = ptr->link;
        }
    }

    void MergeSort(int* array,int start,int end)
    {
        if (start >= end) return;

        int mid = start + (end - start) / 2;

        MergeSort(array , start , mid);
        MergeSort(array , mid + 1 , end)
        Merge(array,start,mid,end);
    }

    void Merge(int* array,int start,int mid,int end)
    {
        int* temp_array = new int[this->size];
        int i = start,j = end,k = 0;

        while (i <= mid && j <= end)
        {
            if (array[i] < array[j])
            {
                temp_array[k++] = array[i++];
            }
            else
            {
                temp_array[k++] = array[j++];
            }
        }
        
        while (i <= mid)
        {
            temp_array[k++] = array[i++];
        }
        
        while (j <= end)
        {
            temp_array[k++] = array[j++];
        }
        
        for (int x = 0; x < k; x++)
        {
            array[x] = temp_array[x];
        }
    }

    int BinarySearch(int target)
    {
        ToArraySort();
        cout << "List Is Sorted By Merge Sort Algorithm...." << endl;
        Node* ptr = this->head;
        int i=0;
        
        int* array = new int[this->size++];
        while (ptr != nullptr)
        {
            array[i++] = ptr->data;
            ptr = ptr->link;
        }
        
        int start = 0,end = this->size -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (array[mid] == target)
            {
                return mid;
            }
            else if (target < mid)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            return -1;
        }
    }

    int size()
    {
        return size;
    }
};

int main()
{
    LinkedList obj;
    int choice;
    cout << endl << "Welcome To Linked List Algorithm" << endl;
    do
    {
        cout << endl << "========== Menu ==========" << endl;
        cout << "1. Insert At Front." << endl;
        cout << "2. Insert At End." << endl;
        cout << "3. Insert At Index." << endl;
        cout << "4. Delete At Front." << endl;
        cout << "5. Delete At End." << endl;
        cout << "6. Delete At Index." << endl;
        cout << "7. Update Any ELement." << endl;
        cout << "8. Display." << endl;
        cout << "9. Current Size." << endl;
        cout << "10. Sort List (Merge Sort)." << endl;
        cout << "11. Search Element (Binary Search)." << endl;
        cout << "====================" << endl;

        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "Program IS Successfully Executed...." << endl;
            cout << "Thank You So Much To Explore Have A Great Day...." << endl;
            cout << "Press Enter To Exit....";
            break;
        
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
            obj.DisplayList();
            cout << endl;
            obj.Update();
            break;
        
        case 8:
            obj.DisplayList();
            break;
        
        case 9:
            int size = obj.size();
            cout << endl << "The Current Size Of The List is :- " << size << endl;
            break;
        
        case 10:
            obj.ToArraySort();
            break;
        
        case 11:
            obj.DisplayList();
            cout << endl;
            int result = obj.BinarySearch();
            if (result >= 0)
            {
                cout << "The Element Is Founded At " << result <<" Index." << endl;
            }
            else
            {
                cout << "The Element Is Not Foundd In List." << endl;
            }
            break;

        default:
            cout << endl << "Wrong Choice... Please Try Again!" << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}