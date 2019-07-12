#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PI 3.14159

// Project Euler Problem Number 5
/*
	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main(){

	int divisible = 0;
	
	while(!divisible)
	{
		divisible = 1;

		for (int i = 1, i < 21, i++)
		{
			if (num%i != 0)
			{
				divisible = 0;
				break;
			}
		}
		if (!divisible)
	}

	return 0;
}





