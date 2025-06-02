#include<iostream>
using namespace std;

class Stack
{
public:
    int *array;
    int top;
    int currently;

    Stack(int size)
    {
        this->currently = size;
        this->top = -1;
        this->array = new int[size];
    }

    ~Stack()
    {
        delete[] this->array;
    }

    void Insert(int element);
    void Pop();
    int Peek();
    void isFull();
    void isEmpty();
    int size();
    void Display();
};

void Stack::Insert(int element)
{
    if (this->top + 1 < this->currently)
    {
        this->top++;
        this->array[top] = element;    
    }
    else
    {
        cout << endl << "The Stack Is Overflowing." << endl;
    }
}

void Stack::Pop()
{
    if (this->top >= 0)
    {
        this->top--;
    }
    else 
    {
        cout << endl << "The Stack is Already Empty." << endl;
    }
}

int Stack::Peek()
{
    if (this->top >= 0)
    {
        return array[top];
    }
}

int Stack::size()
{
    return this->top + 1;
}

void Stack :: Display()
{
    cout << endl << "The Stack Is :- " << endl;
    for (int i = 0; i < this->top + 1; i++)
    {
        cout << array[i] << " ";
    }
}

void Stack::isFull()
{
    if (this->top + 1 == this->currently)
    {
        cout << endl << "The Stack Is Overflowing" << endl;
    }
    else
    {
        cout << endl << "The Stack Is Underflow" << endl;
    }
}

int main()
{
    int size;

    cout << "Enter The Size Of Stack :- ";
    cin >> size;

    Stack obj(size);

    int choice;
    do
    {
        cout << endl <<"----- Program's -----" << endl;
        cout << "Press 1 To Insert." << endl;
        cout << "Press 2 To Pop." << endl;
        cout << "Press 3 To Peek." << endl;
        cout << "Press 4 To Check The Stack Is Empty Or Not." << endl;
        cout << "Press 5 To Check The Stack Is Full Or Not." << endl;
        cout << "Press 6 To Check The Current Size Of Stack." << endl;
        cout << "Press 7 To Display Stack." << endl;
        cout << "Press 0 To Exit." << endl;
        
        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "---- Your Program Is Sucessfully Exited ----" << endl;
            break;

        case 1:
            int num;
            cout << "Enter Value :- ";
            cin >> num;
            obj.Insert(num);
            break;

        case 2:
            obj.Pop();
            break;

        case 3:
            cout << "The Top Most Element Of Stack Is :- " << obj.Peek() << endl;
            break;

        case 4:
            obj.isEmpty();
            break;

        case 5:
            obj.isFull();
            break;

        case 6:
            cout << "The Current Size Of Stack Is :- " << obj.size;
            break;

        case 7:
            obj.Display();
            break;

        default:
            cout << endl << "---- Wrong Choice ----" << endl;
            break;
        }
    }
    while (choice != 0);
    return 0;
}