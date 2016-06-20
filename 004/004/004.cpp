// 004.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <stdio.h>

#define  DIGITS 3

using namespace std;


class Timer
{
public:
	Timer() {  }

	void reset() { beg_ = clock(); }

	void start()
	{
		beg_ = clock();
	}

	void stop()
	{
		end_ = clock();
	}

	double elapsed() {
		return (double)(end_ - beg_) / CLOCKS_PER_SEC;;
	}

	double elapsed_ms() {
		return (double)(end_ - beg_) / CLOCKS_PER_SEC * 1000.0;
	}


private:
	clock_t beg_, end_;
};


bool is_palindromic(int n)
{
	string s = to_string(n);
	//cout << "n = " << n << endl;
	if (equal(s.begin(), s.begin() + s.size() / 2, s.rbegin()))
		return true;
	else
		return false;	
}


int main()
{
	long long result = 0;
	long long temp = 0;

	Timer timer;
	timer.start();


	for (int i = 999; i > 100; i--)
	{
		for (int j = 999; j > 100; j--)
		{

			int mul = i*j;
			if (is_palindromic(mul))
			{
				if (result < mul) result = mul;
				break;
			}
		}
	}

	timer.stop();

	cout << "result = " << result << endl;
	printf("Elapsed time is %.2lf milliseconds.", timer.elapsed_ms());
	getchar();
	return 0;
}

