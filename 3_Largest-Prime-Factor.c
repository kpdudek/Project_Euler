#include <stdio.h>
#include <math.h>

// Project Euler Problem Numer
/*
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/

double modulus(double val,double div) {
	double sum=0,remainder;
	while(1){
		sum = sum + div;
		if((val - sum) < div){
			remainder = val - sum;
			break;
		}
		else if((val - sum) == 0){
			remainder = 0;
			break;
		}
	}
	return remainder;
}

double is_prime(double val) {
	double fact;
	for(double i = 2; i < (val/2); i++) {
		fact = val/i;
		double factor = fmod(val,fact);
		if(factor == 0){
			return 0;
		}
		printf("%f\n",i);
	}
	return 1;
}


double Largest_Prime(double val) {
	double lpf,fact;
	for(double i=2; i < (val/2); i++) {
		fact = val/i;
		double factor = fmod(val,fact);
		if((factor == 0) && is_prime(fact)){
			lpf = fact;
			break;
		}
		printf("%f\n",fact);
	}
	return lpf;
}


double main(){
	double pass = 600851475143;
	double ans = Largest_Prime(pass);
	printf("The anser is: %f\n",ans);
	return 0;
}
