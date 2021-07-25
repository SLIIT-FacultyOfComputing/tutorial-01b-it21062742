/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int multiply(int val1,int val2);
int minimum(int val1,int val2);
int maximum(int val1,int val2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int val1,int val2)
{
  if(val1 < val2)
  {
    return val1;
  }
  else 
  {
    return val2;
  }
}
int maximum(int val1,int val2)
{
  if(val1 < val2)
  {
    return val2;
  }
  else 
  {
    return val1;
  }
}
int multiply(int val1,int val2)
{
  return val1*val2;
}
