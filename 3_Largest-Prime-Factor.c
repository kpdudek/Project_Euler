#include <stdio.h>
#include <math.h>

// Project Euler Problem Numer
/*

*/


int is_prime(val) {
	for(double i = val-1; i > 0; i--) {
		int factor = val%i;
		if(factor == 0){
			return 0;
		}
	}
	return 1;
}


double Largest_Prime(double val) {
	for(double i=val-1; i > 0; i--) {
		int factor = val%i;
		if((factor == 0) && is_prime(i)){
			return i;
		}
	}
}


void main(){
	double pass = 600851475143;
	double ans = Largest_Prime(pass);
	printf("The anser is: %f\n",ans);
}
