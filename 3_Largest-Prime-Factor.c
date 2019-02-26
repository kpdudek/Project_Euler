#include <stdio.h>
#include <math.h>

// Project Euler Problem Number 4
/*
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/


unsigned long long int is_prime(unsigned long long int val) {
	unsigned long long int fact;
	int out = 1;
	for(unsigned long long int i = 2; i < val; i++) {
		fact = val%i;
		//unsigned long long int factor = fmod(val,fact);
		if(fact == 0){
			printf("Not Prime");
			out = 0;
			break;	
		}
		//printf("%lld\n",i);
	}
	return out;
}

int Is_Prime(unsigned int number) {
    if (number <= 3 && number > 1)
        return 1;            // as 2 and 3 are prime
    else if (number%2==0 || number%3==0)
        return 0;     // check if number is divisible by 2 or 3
    else {
        unsigned int i;
        for (i=5; i*i<=number; i+=6) {
            if (number % i == 0 || number%(i + 2) == 0)
                return 0;
        }
        return 1;
    }
}

unsigned long long int Largest_Prime(unsigned long long int val) {
	unsigned long long int lpf,fact;
	for(unsigned long long int i=ceil(val/2); i >0; i--) {
		//fact = val/i;
		// factor = fmod(val,fact);
		fact = val%i;
		printf("%lld\n",i);
		if((fact == 0) && Is_Prime(i)){
			lpf = i;
			break;
		}
		//printf("%lld\n",fact);
	}
	return lpf;
}


unsigned long long int main(){
	unsigned long long int pass = 600851475143;
	unsigned long long int ans = Largest_Prime(pass);
	printf("The anser is: %lld\n",ans);
	return 0;
}
