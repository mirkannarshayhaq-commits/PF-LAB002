#include <stdio.h>
int main() {
int i=3,pin,a;
do {
printf("Enter pin ");scanf("%d",&pin);printf("\n");

if(pin==4321) {
printf("access granted");
break;
}
else {
i--;
a=1;
printf(" Wrong PIN. %d attempts remaining\n",i);

}
 }while(i>=a);
if(pin!=4321)
printf("Card blocked. Please contact your bank.");
return 0;}