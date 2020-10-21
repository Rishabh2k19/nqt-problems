/*Write a C program, to find the area of a circle when the diameter is given. The
input diameter is an integer and the output area should be a floating point
variable with 2 point precision*/

#include<stdio.h>
int main()
{
  
  int dia;
  float r, area;
  scanf("%d",&dia);
  r = (float)dia/2;
 
  area = 3.14*r*r;
  printf("%0.2f",area);

  return 0;
}
