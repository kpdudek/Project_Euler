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

int is_even(long int val)
{
  if (val%2 == 0){return 1;}
  else{return 0;}
}


long int palindrome(long int num) {
  long int num1,num2,prod;
  char str[20];

  for (long int i=num;i>0;i--)
  {
    for (long int j=num;j>0;j--)
    {
      prod = i*j;
      //printf("%ld",prod);
      sprintf(str,"%ld",prod);
      long int len = strlen(str);
      //printf("%ld\n",len);
      //printf("%c %c\n",str[0],str[len-1]);
      if (is_even(len))
      {
        int pal = 1;
        for (int i=0;i<len/2;i++)
        {
          if (str[i] != str[len-1-i])
          {
            pal = 0;
            break;
          }
        }
        if (pal){return prod;}
      }
      else
      {
        int pal = 1;
        for (int i=0;i<((len-1)/2);i++)
        {
          if (str[i] != str[len-1-i])
          {
            pal = 0;
            break;
          }
        }
        if(pal){return prod;}
      }
    }
  }
}


long int main(){
  long int val = 999;
  long int out = palindrome(val);
  printf("The answer is %ld\n",out);
	return 0;
}
