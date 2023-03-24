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
	string surchData(vector<vector<int>> vec, int value, int surchValue)
	{
		int sizeOfVec = vec.size();
		if (sizeOfVec % 2 == 1) {

		}
		else { sizeOfVec--; }
		return "aboba";
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
}