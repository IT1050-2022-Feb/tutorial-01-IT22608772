/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int no1,int no2);// function prototype
int maximum(int no1,int no2);// function prototype
int multiply(int no1,int no2);// function prototype
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));// function calling and print output
   printf("%d ", maximum(no1, no2));// function calling and print output
   printf("%d ", multiply(no1, no2));// function calling and print output

  int minimum(int no1,int no2)// function definition
  {
    if (no1 < no2)
      return no1;// return statement

    if else (no1 > no2)
      return no2;// return statement
    
  }

  int maximum(int no1,int no2)// function definition
  {
    if (no1 > no2)
      return no1;// return statement

    else if (no1 < no2)
      return no2;// return statement
  }

  int multiply(int no1,int no2)// function definition
  {
    int mul;
    mul = no1 * no2;
    return mul;// return statement
  }
  
  
   return 0;
}
