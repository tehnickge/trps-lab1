#pragma once
#include "second_try.h"
#include "includes.h"
#include "NavigateInTable.h"


namespace secnond_try
{
	vector<vector<int>> generateVectorWithData(int k)
	{
		vector<vector<int>> vec;
		vector<int> temp;
		for (int i = 0; i < k; i++)
		{
			temp.clear();
			for (int j = 0; j < 5; j++)
			{
				temp.push_back((rand() % 12) + 1);
			}
			vec.push_back(temp);
		}
		return vec;
	}
	string surchData(vector<vector<int>> vec, int colValue, int surchValue)
	{
		string res;
		for (int i = 0; i < vec.size(); i++)	// если искомое значение равно тикущему выход
		{
			if (vec[i][colValue] == surchValue) 
			{
				(res = to_string(vec[i][colValue]));
				return res;
			} 		
		}
	}

	vector<int> boubleSort(vector<vector<int>> vec, int posCount) 
	{
		vector<int> res;
		for (int i = 0; i < vec.size(); i++)
		{
			res.push_back(vec[i][posCount]);
		}
		int start_time = clock();
		for (int i = 0; i < res.size(); i++)
		{
			for (int j = 0; j < res.size() - 1; j++)
			{
				if (res[j] > res[j + 1])
				{
					int b = res[j]; // создали дополнительную переменную
					res[j] = res[j + 1]; // меняем местами
					res[j + 1] = b; // значения элементов
				}
			}
		}
		int end_time = clock();
		double work_time = (end_time - start_time) / 1000.0;
		cout << "work time: " << work_time << endl;
		return res;
	}

	vector<vector<int>> deleteElement(vector<vector<int>> vec, int row, int col)
	{
		if ((row > vec.size() || row < 0) || (col > vec[0].size() || col < 0 ))
		{
			cout << setw(5) << "incorrect value" << endl;
		}
		else
		{
			vec[row][col] == NULL;
		}
		return vec;
	}
	vector<vector<int>> deleteElement(vector<vector<int>> vec, int row)
	{
		if ((row > vec.size() || row < 0))
		{
			cout << setw(5) << "incorrect value" << endl;
		}
		else
		{
			for (int i = 0; i < 5; i++)
			{
				vec[row][i] = NULL;
			}
		}
		return vec;
	}
}