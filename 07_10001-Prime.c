#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PI 3.14159

// Project Euler Problem Number 7 
/*
	By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

	What is the 10 001st prime number?
*/

// This function checks if the number passed to it is prime
//	returns 1 if prime
//	returns 0 if non-prime
int Is_Prime(unsigned long long int number) {
    if (number <= 3 && number > 1)
        return 1;            // as 2 and 3 are prime
    else if (number%2==0 || number%3==0)
        return 0;     // check if number is divisible by 2 or 3
    else {
        unsigned long long int i;
        for (i=5; i*i<=number; i+=6) {
            if (number % i == 0 || number%(i + 2) == 0)
                return 0;
        }
        return 1;
    }
}

int main(){

	int primes = 0;

	unsigned long long int num = 0;


	while (primes <= 10001)
	{
		num++;
		if (Is_Prime(num))
		{
			primes++;
		}
	}
	printf("The answer is %lld\n",num);
	return 0;
}





