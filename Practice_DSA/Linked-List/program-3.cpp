#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
    vector<int> value;

    void Display()
    {
        cout << "Current List Is :- ";
        for (int i = 0; i < value.size(); i++)
        {
            cout << value.at(i) << " -> ";
        }
        cout << "NULL" << endl;
    }

    void InsertAtFront()
    {
        int data;
        cout << "Enter Data To Insert At Front :- ";
        cin >> data;
        value.insert(value.begin(),data);
    }
    
    void InsertAtEnd()
    {
        int data;
        cout << "Enter Data To Insert At End :- ";
        cin >> data;
        value.insert(value.end(),data);
    }

    void InsertAtIndex()
    {
        int index,data;

        cout << "Enter Index To Insert Value :- ";
        cin >> index;

        if (index < 0 || index > value.size())
        {
            while (index < 0 || index > value.size())
            {
                cout << "Invaild Index...." << endl;
                cout << "Enter Index To Insert Value :- ";
                cin >> index;
            }
        }
        else
        {
            cout << "Enter Data To Insert At " << index << " Index :- ";
            cin >> data;
            value.insert(value.begin() + index,data);
        }
    }
    
    void DeleteAtFront()
    {
        (value.size() != 0) 
            ? value.erase(value.begin())
            : cout << "The List Is Already Empty Nothing To Delete." << endl;
    }
    
    void DeleteAtEnd()
    {
        (value.size() != 0)
            ? value.erase(value.end())
            : cout << "The List Is Already Empty Nothing To Delete." << endl;
    }

    void DeleteAtIndex()
    {
        if (! value.empty())
        {    
            int index;

            cout << "Enter Index To Delete At :- ";
            cin >> index;

            if (index < 0 || index > value.size())
            {
                while (index < 0 || index > value.size())
                {
                cout << "Invaild Index...." << endl;
                    cout << "Enter Index To Delete At :- ";
                    cin >> index;
                }
            }
            else
            {
                value.erase(value.begin() + index);
                cout << "Value IS Sucessfully Deleted From The " << index << " Index." << endl;
            }
        }
        else
        {
            cout << "The List IS Already Empty Nothing To Delete In The List." << endl;
        }
    }

    void UpdateAtIndex()
    {
        if (! value.empty())
        {
            int index,data;
            cout << "Enter Index To Update The Value :- ";
            cin >> index;

            if (index < 0 || index > value.size())
            {
                while (index < 0 || index > value.size())
                {
                    cout << "Invaild Index...." << endl;
                    cout << "Enter Index To Update The Value :- ";
                    cin >> index;
                }
            }
            else
            {
                cout << "Enter Data To Insert At " << index << " Index :- ";
                cin >> data;
                value[index] = data;
                cout << "The Value " << data << " Is Successfully Updated At " << index << " Index." << endl;
            }
        }
        else
        {
            cout << "Nothing To Update In The Given Because The List Is Already Empty." << endl;
        }
    }

    int Size()
    {
        return value.size();
    }

    void Clear()
    {
        value.clear();
    }
};

int main()
{
    Node obj;
    int choice;
    cout << endl << "Welcome To Linked List Program...." << endl;

    do
    {
        cout << endl << "============ Menu ============" << endl;
        cout << "1. Insert At Front." << endl;
        cout << "2. Insert At End." << endl;
        cout << "3. Insert At Index." << endl;
        cout << "4. Delete At Front." << endl;
        cout << "5. Delete At End." << endl;
        cout << "6. Delete At Index." << endl;
        cout << "7. Update Any ELement." << endl;
        cout << "8. Display." << endl;
        cout << "9. Current Size." << endl;
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
            obj.Display();
            cout << endl;
            obj.UpdateAtIndex();
            break;
        
        case 8:
            obj.DisplayList();
            break;
        
        case 9:
            int size = obj.size();
            cout << endl << "The Current Size Of The List is :- " << size << endl;
            break;
  
    } while (choice != 0);
    
    return 0;
}