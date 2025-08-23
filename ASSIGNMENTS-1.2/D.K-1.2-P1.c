#include<stdio.h>
//find largest or smallest of two numbers
int main()
{
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
       if (a > b)
{
    printf("Largest: %d, Smallest: %d\n", a, b);
}
       else if (b > a) 
{
    printf("Largest: %d, Smallest: %d\n", b, a);
    return(0);
}