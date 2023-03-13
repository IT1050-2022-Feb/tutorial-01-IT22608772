/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int input01,input02;//get inputs
  float avg;//get inputs

  printf("Enter your first number :");
  scanf("%d",&input01);

  printf("Enter your second number :");
  scanf("%d",&input02);

  avg = (input01+input02)/2;//calculate average

  printf("Average is : %.2f",avg);//print average
  
  
  return 0;
}

