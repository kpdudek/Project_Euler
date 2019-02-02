#include <stdio.h>
#include <math.h>


// Project Euler Problem 1
/*
  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
  Find the sum of all the multiples of 3 or 5 below 1000.
*/
int sum_of_natural_multiples() {
	int sum = 0; //Running sum

	// Add multiples of 3 up to 1000
	for(int i; i < 1000; i = i+3) {
		sum = sum + i;
	}

	// Add multiples of 5 up to 1000
	for(int i; i < 1000; i = i+5){

		// Check if the value is a multiple of 3
		if(i%3 == 0){ // If yes, dont add to sum
			i = i;
		}
		else{ // If no, add to sum
			sum = sum + i;
		}
	}
	return sum;
}


int main(){
	int ans;
	ans = sum_of_natural_multiples();
	printf("The answer is %d\n",ans);
        return 0;
}

