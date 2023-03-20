#pragma once
#include "includes.h"
using namespace std;
namespace first_try
{

	vector<vector<int>> generateVectorWithData(int k = 25);
	string surchData(vector<vector<int>> vec, int value, int surchValue);
	int getData(vector<vector<int>> vec, int value, int surchValue);
	vector<int> TetragonSort(vector<vector<int>> vec, int sortBy);
	vector<vector<int>> deleteElement(vector<vector<int>> vec, int index);
}