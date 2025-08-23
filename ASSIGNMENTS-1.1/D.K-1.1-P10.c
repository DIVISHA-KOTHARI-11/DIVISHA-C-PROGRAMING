#include <stdio.h>

   int main ()
{
float dollar;
   printf(enter the value in dolars: ");
   scanf("%f", &dollar);
float rupees= dollar*80;
float pounds= rupees/70;
   printf("Pounds = %f", pounds);
return 0;
}
