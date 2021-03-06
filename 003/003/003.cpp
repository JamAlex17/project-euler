// 003.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const long long cNumber = 600851475143;

using namespace std;

unsigned long long findPrimes(unsigned long long value, unsigned long long* result)
{
	for (unsigned long long i = 2; i <= value; i++)
	{
		if (value % i == 0)
		{
			if (value != cNumber) cout << " * ";
			if (i > *result) *result = i;
			cout << i;
			return findPrimes(value / i, result);
			break;
		}
	}
}

int main()
{
	unsigned long long result = 0;
	cout << cNumber << " = ";

	findPrimes(cNumber, &result);

	cout << endl << "result = " << result << endl;
	getchar();
	return 0;
}

