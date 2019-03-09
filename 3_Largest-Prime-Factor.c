#include <stdio.h>
#include <math.h>

// Project Euler Problem Number 4
/*
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
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


// This function finds the largest prime factor of the numer passed to it
//	calls Is_Prime()
unsigned long long int Largest_Prime(unsigned long long int val) {
	unsigned long long int lpf,fact;
	// Check if values counting up from 3 are factors. The iteration step
	// is two because any even number will not be prime
	for(unsigned long long int i=3; i<val; i+=2)
	{
		// check if the value is a factor
		fact = val%i;
		// If modulus is 0, the value is a factor
		if (fact == 0)
		{
			// Print the value
			printf("%lld\n",i);

			// If the number is a factor, find the number of times it goes into val
			// num is the largest value that is a factor of val
			unsigned long long int num = val/i;
			
			// Check if num is prime
			if (Is_Prime(num))
			{
				return num;				
			}
		}
	}
}


// Find the Largest Prime Factor
unsigned long long int main(){
	unsigned long long int pass = 600851475143;
	unsigned long long int ans = Largest_Prime(pass);
	printf("The anser is: %lld\n",ans);
	return 0;
}
