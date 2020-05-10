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

int is_even(unsigned long int val)
{
  if (val%2 == 0){return 1;}
  else{return 0;}
}


long int palindrome(unsigned long int num) {
  unsigned long int num1,num2,prod,result=0;
  char str[20];

  for (unsigned long int i=num;i>0;i--)
  {
    for (unsigned long int j=num;j>0;j--)
    {
      prod = i*j;
      //printf("%ld",prod);
      sprintf(str,"%ld",prod);
      unsigned long int len = strlen(str);
      //printf("%ld\n",len);
      //printf("%c %c\n",str[0],str[len-1]);
      if (is_even(len))
      {
        int pal = 1;
        for (int k=0;k<(len/2);k++)
        {
          if (str[k] != str[len-1-k])
          {
            pal = 0;
            break;
          }
        }
        if (pal && prod > result){result = prod;}
      }
      else
      {
        int pal = 1;
        for (int k=0;k<(((len-1)/2));k++)
        {
          if (str[k] != str[len-1-k])
          {
            pal = 0;
            break;
          }
        }
        if(pal && prod > result){result = prod;}
      }
    }
  }
  return result;
}


long int main(){
  unsigned long int val = 999;
  unsigned long int out = palindrome(val);
  printf("The answer is: %ld\n",out);
	return 0;
}
