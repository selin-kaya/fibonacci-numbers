#include <stdio.h>

int main(void) {

  int num1=1;
  int num2=2;
  int fib;
  int i;
  
  for(i=0;i<4000000;i++)
      {
        fib=num1+num2;
        num1++;
        num2+=num1;
      }
  
  int sum;
  
  if(fib%2==0)
  {
    sum+=fib;
  }
  
  printf("%d",sum);

  
  return 0;
}