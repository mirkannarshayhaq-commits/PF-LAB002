#include <stdio.h> 
int main(){

int num1,num2;
printf("enter first integer  ");scanf("%d",&num1);printf("\n");
printf("Enter the second integer ");scanf("%d",&num2);printf("\n");
printf("Before swaping\nnum1=%d num2=%d\n",num1,num2);
int x=num1;
num1=num2;
num2=x;
printf("After swapping\nnum1=%d num2=%d",num1,num2);
return 0;}