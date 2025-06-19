#include<iostream>
#include<vector>
using namespace std;

class QuickSort
{
public:
    int Partition(vector<int>& julu,int start,int end)
    {
        int Pivot = julu[end];
        int i = start - 1;

        for (int j = start; j < end; j++)
        {
            if (julu[j] <= Pivot)
            {
                swap(julu[++i],julu[j]);
            }
        }
        swap(julu[++i],julu[end]);
        return i;
    }

    void Quick_Sort(vector<int>& nurul,int start,int end)
    {
        if (start >= end) return;
        
        int PiviotIndex = Partition(nurul,start,end);
        Quick_Sort(nurul,start,PiviotIndex - 1);
        Quick_Sort(nurul,PiviotIndex + 1,end);
    }

    void DisplayVector(vector<int>& idiots,int size)
    {
        for (int i = 0; i < idiots.size(); i++)
        {
            cout << idiots.at(i) << " ";
        }
        cout << endl;
    }
};

int main()
{
    QuickSort obj;
    vector<int> chutki;
    int size,num;
    
    cout << "Enter The Size Of Vector :- ";
    cin >> size;

    cout << endl << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Vector[" << i << "] :- ";
        cin >> num;
        chutki.push_back(num);
    }
    
    cout << endl << "The UnSorted Vector Is :- ";
    obj.DisplayVector(chutki,size);
    
    obj.Quick_Sort(chutki,0,chutki.size() - 1);

    cout << endl << "The Sorted Vector Is :- ";
    obj.DisplayVector(chutki,size);


    return 0;
}