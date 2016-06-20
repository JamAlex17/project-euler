// 006.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <stdio.h>

#define  NUMBER 100

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

int problem_006()
{
	int result = 0;
	int sum_squares = 0;

	for (int i = 1; i <= NUMBER; i++)
	{
		sum_squares += i*i;
	}

	int sum_natural = (1 + NUMBER)*NUMBER / 2;

	result = sum_natural*sum_natural - sum_squares;

	return result;
}


int main()
{
	long long result = 0;

	Timer timer;
	timer.start();

	result = problem_006();
	cout << endl << "result = " << result << endl;

	timer.stop();

	printf("Elapsed time is %.2lf milliseconds.", timer.elapsed_ms());
	getchar();
	return 0;
}
