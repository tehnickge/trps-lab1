#include "includes.h"
#include "NavigateInTable.h"
#include "first_try.h"


using namespace std;
// Задача 1. Даны N записей вида: код материала, дата поступления,
// номер склада, количество, сумма. 







int main()
{
    srand((unsigned)time(0));
    vector<vector<int>> vec = first_try::generateVectorWithData();

    for (const vector<int>& arr : vec)
    {
        for (const int& element : arr)
        {
            cout << setw(5) << element << "";
        }
        cout << endl;
    }

    cout << endl << endl << "_______________________________________" << endl;

    vector<int> sortVec = first_try::TetragonSort(vec, STOCK_NUMBER);
    for (int element : sortVec)
    {
        cout << element << endl;
    }
   
    vec = first_try::deleteElement(vec, 3);

    for (const vector<int>& arr : vec)
    {
        for (const int& element : arr)
        {
            cout << setw(5) << element << "";
        }
        cout << endl;
    }
    return 0;
}




