/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1;
  int mark2;
  float avg;

  printf("Enter mark for subject 1 : ");
  scanf("%d", &mark1);

  printf("Enter mark for subject 2 : ");
  scanf("%d", &mark2);

  avg = (float)(mark1 + mark2) / 2.0;

  printf("Average mark of %d and %d is : %.2f" , mark1 , mark2 , avg);
  
  return 0;
}

