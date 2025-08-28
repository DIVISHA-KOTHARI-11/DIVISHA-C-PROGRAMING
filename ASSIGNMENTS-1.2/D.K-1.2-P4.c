#include<stdio.h>
  int main(){
  int x;
    printf("enter the value of x");
    scanf("%d",&x);
if(x % 7==0){
    printf("The number is divisble by 7");
}
else{
    printf("The number is not divisble by 7");
}
return 0;
}