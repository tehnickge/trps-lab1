#include "includes.h"
#include "NavigateInTable.h"
#include "first_try.h"
#include "second_try.h"


using namespace std;
// Задача 1. Даны N записей вида: код материала, дата поступления,
// номер склада, количество, сумма. 

int main()
{
    srand((unsigned)time(0));
    vector<vector<int>> vec = first_try::generateVectorWithData(); // field the vector (df value 25)

    for (const vector<int>& arr : vec)      // print vector
    {
        for (const int& element : arr)
        {
            cout << setw(5) << element << "";
        }
        cout << endl;
    }

    cout << endl << endl << "_______________________________________" << endl;

    vector<int> sortVec = first_try::TetragonSort(vec, STOCK_NUMBER); // sort

    for (int element : sortVec) // print
    {
        cout << element << endl;
    }
   
    vec = first_try::deleteElement(vec, 3); // delete

    for (const vector<int>& arr : vec)
    {
        for (const int& element : arr)
        {
            cout << setw(5) << element << "";
        }
        cout << endl;
    }

    vector<vector<int>> vectorina = secnond_try::generateVectorWithData();

    vectorina = secnond_try::boubleSort(vectorina, DATE_POST);
    cout << "__________THIS IS SECOND______" << endl << endl << endl;
    for (const vector<int>& arr : vectorina)
    {
        for (const int& element : arr)
        {
            cout << setw(5) << element << "";
        }
        cout << endl;
    }

    return 0;
}




