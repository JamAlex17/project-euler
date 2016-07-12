// 030.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int cMaxNumber = 9 * 9 * 9 * 9 * 9 * 9 * 5;

using namespace std;

int main()
{
	int total_all = 0;

	for (int i = 2; i < cMaxNumber; i++)
	{
		int total = 0;
		int n = i;

		while (true)
		{
			total += (n % 10) * (n % 10)* (n % 10) * (n % 10) * (n % 10);
			n /= 10;
			if (n == 0) break;
		}

		if (i == total)
		{
			total_all += i;
		}
	}

	cout << "total = " << total_all << endl;
	getchar();
    return 0;
}

