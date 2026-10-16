#include <stdio.h>
int main() {
float distance,time;
printf("Enter the distance in km ");scanf("%f",&distance);printf("\n");
printf("Enter the time in secconds ");scanf("%f",&time);printf("\n");
float avg_speed=distance/time;
printf("Distance:%.2fkm\nTime:%.2fseconds\nAveragespeed:%.2f",distance,time,avg_speed);
return 0;}