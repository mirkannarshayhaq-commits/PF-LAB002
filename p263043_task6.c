#include <stdio.h>
int main() {

int x,y;
printf("Enter value of x  ");scanf("%d",&x);printf("\n");
printf("Enter the value of b  ");scanf("%d",&y);printf("\n");
float a=x/y;
float b=(float) x/y;
float c=(float) (x/y);
printf("a:%f\nb:%f\nc:%f",a,b,c);
return 0;}