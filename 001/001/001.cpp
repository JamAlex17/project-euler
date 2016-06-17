// 001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define  CHECK_NUMBER_A 3
#define  CHECK_NUMBER_B 5
#define  MAX_VALUE 1000

using namespace std;

int main()
{
	int total = 0;

	for (int i = 0; i < MAX_VALUE; i++)
	{
		if ((i % CHECK_NUMBER_A == 0) || (i % CHECK_NUMBER_B == 0))
		{
			total += i;
		}
	}

	cout << "total = " << total << endl;
	getchar();
	return 0;
}



