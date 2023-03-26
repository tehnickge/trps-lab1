#pragma once
#include "includes.h"
using namespace std;
namespace secnond_try
{
	vector<vector<int>> generateVectorWithData(int k = 25);
	string surchData(vector<vector<int>> vec, int value, int surchValue);
	vector<int> boubleSort(vector<vector<int>> vec, int posCount);
	vector<vector<int>> deleteElement(vector<vector<int>> vec, int row, int col);
	vector<vector<int>> deleteElement(vector<vector<int>> vec, int row);
}