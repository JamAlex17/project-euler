// 002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int cMaxValue = 4000000;

using namespace std;

int main()
{
	int total = 0;

	int i = 1;

	//F(1)
	int fib_prev = 0;
	int fib_curr = 1;
	int fib_result = 1;

	cout << "fib(" << i++ << ") = " << fib_result << endl;

	//F(2)...F(N)
	while (true)
	{
		fib_result = fib_curr + fib_prev;
		fib_prev = fib_curr;
		fib_curr = fib_result;		
		
		if (fib_result < cMaxValue)
		{
			cout << "fib(" << i++ << ") = " << fib_result << endl;

			if (fib_result % 2 == 0)
			{
				total += fib_result;
			}
		}
		else
			break;		
	} 

	cout << "total = " << total << endl;
	getchar();
	return 0;
}
