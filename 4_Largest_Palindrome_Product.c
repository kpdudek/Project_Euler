#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Project Euler Problem Numer
/*
  A palindromic number reads the same both ways. The largest palindrome made
  from the product of two 2-digit numbers is 9009 = 91 × 99.
  Find the largest palindrome made from the product of two 3-digit numbers.
*/

int palindrome(int num) {
  int num1,num2,prod;
  char str[20];
  for (int i=num;i>0;i--)
  {
    for (int j=num;j>0;j--)
    {
      prod = i*j;
      printf("%d",prod);
      sprintf(str,"%d",prod);
      int len = strlen(str);
      if (str[0]==str[len]))
      {
        return prod;
      }
    }
  }
}

int main(){
  int out = palindrome(999);
  printf("The answer is %d\n",out);
	return 0;
}
