#include <stdio.h>
#include <math.h>
int main() {
float a,b,c,x1,x2;

printf("Enter the value of a  ");scanf("%f",&a);printf("\n");
printf("Enter the value of b  ");scanf("%f",&b);printf("\n");
printf("Enter the value of c  ");scanf("%f",&c);printf("\n");
float disc =b*b-4*a*c;
if (disc>0 && a!=0) {
x1= (-b-sqrt(disc))/(2*a);
x2=(-b+sqrt(disc))/(2*a);
printf("x1:%.2f\nx2:%.2f",x1,x2);}

else {
printf("roots are complex or imagnary");}
return 0;}