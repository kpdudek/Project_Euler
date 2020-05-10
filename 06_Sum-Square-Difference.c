#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PI 3.14159

// Project Euler Problem Number 6 
/*
	The sum of the squares of the first ten natural numbers is,

				1^2 + 2^2 + ... + 10^2 = 385
	The square of the sum of the first ten natural numbers is,

				(1 + 2 + ... + 10)^2 = 55^2 = 3025
	Hence the difference between the sum of the squares of the first ten natural numbers and the square of
	the sum is 3025 − 385 = 2640.

	Find the difference between the sum of the squares of the first one hundred natural numbers and the
	square of the sum.
*/

unsigned long long int sum_of_squares(int num)
{
	unsigned long long int sum = 0, sq;

	for (int i = 1; i < num +1; i++)
	{
		sq = pow(i,2);
		sum = sum + sq;
	}
	return sum;
}

unsigned long long int square_of_sum(int num)
{
	unsigned long long int sum = 0, sq;

	for (int i=1; i < num +1; i++)
	{
		sum = sum + i;
	}
	sq = pow(sum,2);
	return sq;
}

int main()
{
	int num = 100;
	unsigned long long int sum_of_sq, sq_of_sum;
	long long int ans;

	sum_of_sq = sum_of_squares(num);
	sq_of_sum = square_of_sum(num);

	ans = sq_of_sum - sum_of_sq;

	printf("The answer is: %lld\n",ans);

	return 0;
}





