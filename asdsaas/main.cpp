#include "includes.h"
#include "NavigateInTable.h"
#include "first_try.h"
#include "second_try.h"


using namespace std;
// Задача 1. Даны N записей вида: код материала, дата поступления,
// номер склада, количество, сумма. 
// ez support

int main()
{
    
    srand((unsigned)time(0));
    vector<vector<int>> vec = first_try::generateVectorWithData(10000); // field the vector (df value 25)
    
    cout << setw(50) << "GENERATE VECTOR" << endl;
    //for (const vector<int>& arr : vec)      // print vector
    //{
    //    for (const int& element : arr)
    //    {
    //        cout << setw(5) << element << "";
    //    }
    //    cout << endl;
    //}
    cout << endl << endl << "_______________________________________" << endl;

    cout << setw(50) << "SURCH DATA IN VECTOR" << endl;
    string res;
    int start_time = clock();
    res = first_try::surchData(vec, DATE_POST, 2);
    int end_time = clock();
    double work_time = ((end_time - start_time) / 1000.0);
    cout << res << endl;
    cout << "work_time " << work_time << endl;
    cout << endl << endl << "_______________________________________" << endl;

    cout << setw(50) << "SORT VEC" << endl;
    start_time = clock();
    vector<int> sortVec = first_try::TetragonSort(vec, STOCK_NUMBER); // sort
    end_time = clock();
    work_time = ((end_time - start_time) / 1000.0);
    cout << "work_time " << work_time << endl;
    //for (int element : sortVec) // print
    //{
    //    cout << element << endl;
    //}
    cout << endl << endl << "_______________________________________" << endl;
   
    cout << setw(50) << "DELETE ELEMENT FROM VEC" << endl;
    start_time = clock();
    vec = first_try::deleteElement(vec, 3); // delete
    end_time = clock();
    work_time = ((end_time - start_time) / 1000.0);
    cout << "work_time " << work_time << endl;
    //for (const vector<int>& arr : vec)
    //{
    //    for (const int& element : arr)
    //    {
    //        cout << setw(5) << element << "";
    //    }
    //    cout << endl;
    //}
    cout << endl << endl << "_______________________________________" << endl;

    cout << "\t\t__________THIS IS SECOND______" << endl << endl << endl;
    vector<vector<int>> vectorina = secnond_try::generateVectorWithData(10000);
    //for (const vector<int>& arr : vectorina)
    //{
    //    for (const int& element : arr)
    //    {
    //        cout << setw(5) << element << "";
    //    }
    //    cout << endl;
    //}
    cout << endl << endl << "_______________________________________" << endl;

    cout << setw(50) << "SURCH IN VEC" << endl;
    start_time = clock();
    res = secnond_try::surchData(vectorina, DATE_POST, 5);
    end_time = clock();
    work_time = ((end_time - start_time) / 1000.0);
    cout << "work_time " << work_time << endl;
    cout << "res: " + res << endl;
    cout << endl << endl << "_______________________________________" << endl;

    cout << setw(50) << "SORT vec" << endl;
    vector<int> temp;

   
    cout << "work_time " << work_time << endl;
    //for (const vector<int>& arr : vectorina)
    //{
    //    for (const int& element : arr)
    //    {
    //        cout << setw(5) << element << "";
    //    }
    //    cout << endl;
    //}
    cout << endl << endl << "_______________________________________" << endl;

    cout << setw(50) << "DELETE ROW OR ONE ELEMENT i,j" << endl;
    start_time = clock();
    secnond_try::deleteElement(vectorina, 5);
    end_time = clock();
    work_time = ((end_time - start_time) / 1000.0);
    cout << "work_time " << work_time << endl;
    //for (const vector<int>& arr : vectorina)
    //{
    //    for (const int& element : arr)
    //    {
    //        cout << setw(5) << element << "";
    //    }
    //    cout << endl;
    //}
    return 0;
}




