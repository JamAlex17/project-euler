// 007.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <stdio.h>

const int  cNumber = 10001;

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

int problem_007()
{
	int result = 0;
	int cnt = 0;

	for (int i = 2;; i++)
	{
		bool prime = true;
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime)
		{
			cnt++;
			if (cnt == cNumber)
			{
				return i;
			}
		}

	}

	return result;
}


int main()
{
	long long result = 0;

	Timer timer;
	timer.start();

	result = problem_007();
	cout << endl << "result = " << result << endl;

	timer.stop();

	printf("Elapsed time is %.2lf milliseconds.", timer.elapsed_ms());
	getchar();
	return 0;
}
