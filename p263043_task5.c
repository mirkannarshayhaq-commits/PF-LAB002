#include <stdio.h>
int main() {
int choice,tea,samosa,sandwich,quantity,current_bill,total_items,bill,discount,payable;
tea=60;samosa=40;sandwich=180;total_items=0;bill=0;total_items=0;discount=0;
do {

printf("_______________________________\nChoice\tItem\t\tPrice (Rs)\n_______________________________\n1\tTea\t\t60\n2\tSamosa\t\t40\n3\tsanwich\t\t180\n4\tcheckout\t_\n_______________________________\n");
printf("Enter choice: ");scanf("%d",&choice);printf("\n");
if(choice==1) {
printf("Quantity:  ");scanf("%d",&quantity);printf("\n");

current_bill=tea*quantity;
printf("Current bill: Rs %d\n",current_bill);}
else if(choice==2) {printf("Quantity:  ");scanf("%d",&quantity);printf("\n");

current_bill=samosa*quantity;
printf("Current bill: Rs %d\n",current_bill);}
else if(choice==3) {printf("Quantity:  ");scanf("%d",&quantity);printf("\n");

current_bill=sandwich*quantity;
printf("Current bill: Rs %d\n",current_bill);}

else if(choice>4||choice<1)
printf("Invalid choice. Try again.\n");
total_items=total_items+quantity;
bill=bill+current_bill;
}while(choice!=4);
if(bill>1000)
discount=bill*0.1;    
payable=bill-discount;
  printf("Total items: %d\nBill: Rs %d\nDiscount: Rs %d\nPayable: Rs %d",total_items,bill,discount,payable);
return 0;}