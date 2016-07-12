// 001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int cNumberA = 3;
const int cNumberB = 5;
const int cMaxValue = 1000;

using namespace std;

int main()
{
	int total = 0;

	for (int i = 0; i < cMaxValue; i++)
	{
		if ((i % cNumberA == 0) || (i % cNumberB == 0))
		{
			total += i;
		}
	}

	cout << "total = " << total << endl;
	getchar();
	return 0;
}