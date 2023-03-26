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
				temp.push_back((rand() % 100) + 1);
			}
			vec.push_back(temp);
		}
		return vec;
	}
	string surchData(vector<vector<int>> vec, int colValue, int surchValue)
	{
		string res;
		for (int i = 0; i < vec.size(); i++)	// 
		{
				if(vec[i][colValue] == surchValue) // если искомое значение равно тикущему выход
				(res = to_string(vec[i][colValue]));
				break;
		}
		return res;
	}

	vector<vector<int>> boubleSort(vector<vector<int>> vec, int posCount)
	{
		for (int i = 0; i < vec.size(); i++) 
		{
			for (int j = 0; j < vec.size() - 1; j++)
			{
				if (vec[j][posCount] > vec[j + 1][posCount])
				{
					int b = vec[j][posCount]; // создали дополнительную переменную
					vec[j][posCount] = vec[j + 1][posCount]; // меняем местами
					vec[j + 1][posCount] = b; // значения элементов
				}
			}
		}
		return vec;
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