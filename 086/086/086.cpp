// 086.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <time.h>
#include <stdio.h>

#define  VALUE 1000000

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


bool check_int_sqrt(long long x)
{
	long long result = (long long)sqrt(x);
	return (result*result == x);
}

int main()
{
	long long result = 0;
	long long temp = 0;

	Timer timer;
	timer.start();

	//fibonacci(10);
	
	for (long long l = 1;; l++)
	{
		for (long long wh= 2; wh <= 2 * l; wh++)
		{
			if (check_int_sqrt(l*l + wh*wh))
			{
				temp += (wh > l) ? l + 1 - (wh + 1) / 2 : wh / 2;
			}
		}

		if (temp >= VALUE)
		{
			result = l;
			break;
		}
	}


	cout << "result = " << result << endl;

	timer.stop();
	
	printf("Elapsed time is %.2lf milliseconds.", timer.elapsed_ms());
	getchar();
	return 0;
}

