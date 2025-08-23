#include <stdio.h>
#include <math.h>
//Area of Circle
   int main()
{
float radius;
   printf(" Enter the value of Radius in m: ");
   scanf("%f",&radius);
float pie = 3.14;
float area = pie*radius*radius;
   printf("The Area of Circle in m^2 is %f\n", area);
return 0;
}