#include <stdio.h>
int main() {

int month=0,laptop_price,current_savings,monthly_savings;        
int total_savings;

printf("Laptop price: ");scanf("%d",&laptop_price);                                                                                                                     
printf("Current savings: ");scanf("%d",&current_savings);printf("\n");

if(laptop_price<=0 ||current_savings<=0||monthly_savings<=0)
printf("Enter positive numbers");


else {
if(current_savings==laptop_price)
printf("Sara can buy laptop in %d months",month);
else if(laptop_price>0 ||current_savings>0||monthly_savings>0) {
printf("Monthly savings: ");scanf("%d",&monthly_savings);printf("\n");
total_savings=current_savings;

/*While loop is checking the condition.Until total_saving is less than laptop price the condion is ture as this condition becomes false the month will not be incremented and and new  month saving is not added*/
while(total_savings<laptop_price) {
month=month+1;
total_savings=total_savings+monthly_savings;

printf("Month: %d: savings= %d\n",month,total_savings);
}
printf("%d months are remaining",month);
} } 


return 0;}
