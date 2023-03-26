#pragma once
#include "first_try.h"
#include "includes.h"
#include "NavigateInTable.h"

namespace first_try
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

	// serch
	string surchData(vector<vector<int>> vec, int value, int surchValue)
	{
		int res = 0;
		string str = "res: ";
		// определяем в каком столбце будем искать наше значение 
		// список всех значений: NavigateInTable.h
		switch (value)
		{
		case CODE_MATHERIAL:
			res = getData(vec, CODE_MATHERIAL, surchValue);
			return (str + to_string(res));
			break;
		case DATE_POST:
			res = getData(vec, DATE_POST, surchValue);
			return (str + to_string(res));
			break;
		case STOCK_NUMBER:
			res = getData(vec, STOCK_NUMBER, surchValue);
			return (str + to_string(res));
			break;
		case COUNTS:
			res = getData(vec, COUNTS, surchValue);
			return (str + to_string(res));
			break;
		case SUM:
			res = getData(vec, SUM, surchValue);
			return (str + to_string(res));
			break;
		default:
			cout << "Invalid operation" << endl;
			return "";
			break;
		}
	}

	int getData(vector<vector<int>> vec, int value, int surchValue)
	{
		for (int i = 0; i < vec.size(); i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (j == value)
				{
					if (vec[i][j] == surchValue) // сравниваем, равно текущие значение по i,j искомому surchValue
					{
						return vec[i][j];
					}
				}
			}
		}
	}

	//sort 
	//vector<vector<int>> sortBy(vector<vector<int>> vec, int valueToSort) // sqrt(N) elements
	//{
	//    int sizeVec = vec.size(); 
	// 
	//    if (sizeVec * sizeVec < vec.size())
	//    {
	//        sizeVec++;
	//    }
	//    int minCountInGroup = vec[0][0];
	//    for (int i = 0; i < vec.size(); i++)
	//    {
	//        for (int j = 0; j < 5; j++)
	//        {
	//            if (j == valueToSort)
	//            {
	//                if (vec[i][j] < minCountInGroup)
	//                {
	//                    minCountInGroup = vec[i][j];
	//                }
	//            }
	//        }
	//    }
	//}


	/// sort
	vector<int> TetragonSort(vector<vector<int>> vec, int sortBy)
	{
		int min = 0, i, j, k;
		vector<int> additList, resultList;
		vector<int> arr;
		for (int m = 0; m < vec.size(); m++)
		{
			for (int l = 0; l < 5; l++)
			{
				if (l == sortBy)
				{
					arr.push_back(vec[m][l]);
				}
			}
		}

		int nGroups = sqrt(arr.size());
		if (nGroups * nGroups < arr.size())
			nGroups++;

		additList.assign(nGroups, INT_MAX); //заполняем nGroups ячеек значением INT_MAX
		//заполнение первичными значениями дополнительнгго списсска
		for (i = nGroups * min; i < arr.size(); i += nGroups)
		{
			min = i; //индекс минимального
			for (j = i + 1; j < i + nGroups && j < arr.size(); j++)
			{
				if (arr[j] < arr[min])
					min = j;
			}
			//добавление эл-а в доп. список и заполние эл-а в осн.
			additList[i / nGroups] = arr[min];
			arr[min] = INT_MAX;
		}

		//основной цикл
		while (true)
		{
			//формирование результата
			min = 0; //индекс минимального
			for (k = 1; k < additList.size(); k++)
			{
				if (additList[k] < additList[min])
					min = k;
			}
			resultList.push_back(additList[min]);

			//точка выхода
			if (resultList.size() == arr.size())
				break;

			//основная работа
			i = nGroups * min; //начальная точка просмотра
			min = i; //индекс минимального
			for (j = i + 1; j < i + nGroups && j < arr.size(); j++)
			{
				if (arr[j] < arr[min])
					min = j;
			}
			//добавление эл-а в доп. список и заполние эл-а в осн.
			additList[i / nGroups] = arr[min];
			arr[min] = INT_MAX;
		}
		return resultList;
	}

	vector<vector<int>> deleteElement(vector<vector<int>> vec, int index)
	{
		auto iter = vec.cbegin();
		vec.erase(iter + index);
		return vec;

		/* erase
		 _CONSTEXPR20 iterator erase(const_iterator _Where) noexcept(
		is_nothrow_move_assignable_v<value_type>)  strengthened  {
			const pointer _Whereptr = _Where._Ptr;
			auto& _My_data = _Mypair._Myval2;
			pointer& _Mylast = _My_data._Mylast; 
		*/
	}
}