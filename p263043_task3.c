#include <stdio.h>
int main() {

float salary,tax_rate,tax_ammount,net_salary;
char x='%';
char y='$';
printf("Enter salary  ");scanf("%f",&salary);printf("\n");
printf("Enter tax rate in percentage ");scanf("%f",&tax_rate);printf("\n");
tax_ammount=salary*tax_rate/100;
net_salary=salary-tax_ammount;
printf("salary: %.2f%c\nTax rate: %.2f%c\nTax ammount: %.2f%c\nNet salary: %.2f%c",salary,x,tax_rate,y,tax_ammount,y,net_salary,y);
return 0;}