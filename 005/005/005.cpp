// 005.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// 004.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <stdio.h>

const int  cNumber = 20;

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

int problem_005()
{	
	int nok = 0, count;	
	for (int i = 2;; i++) {
		count = 0;
		for (int j = 1; j <= cNumber; j++) {
			if (i % j == 0)
				count++;
		}
		if (count == cNumber) {
			nok = i;
			break;
		}
	}	
	return nok;
}


int main()
{
	long long result = 0;
	long long temp = 0;

	Timer timer;
	timer.start();

	result = problem_005();
	cout << endl << "result = " << result << endl;

	timer.stop();

	printf("Elapsed time is %.2lf milliseconds.", timer.elapsed_ms());
	getchar();
	return 0;
}
