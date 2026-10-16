#include <stdio.h> 
int main() {
int pf,cal,phy,total;
float avg;
printf("Marks of PF"); scanf("%d",&pf);printf("\n");
printf("Marks of physics  ");scanf("%d",&phy);printf("\n");
printf("Marks of calculus  ");scanf("%d",&cal);printf("\n");
total =pf+cal+phy;
avg= (float)total/3;
printf("Total marks: %d\nAverage marks:%f ",total,avg);





return 0;}