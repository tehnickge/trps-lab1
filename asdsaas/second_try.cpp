#pragma once
#include "second_try.h"
#include "includes.h"
#include "NavigateInTable.h"


namespace senond_try
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

}