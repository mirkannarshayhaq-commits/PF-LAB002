#include <stdio.h>
int main() {
int ball,runs,boundries,dots,total;
total=0;
boundries=0;
dots=0;
for(ball=1;ball<=6;ball++) {
printf("Ball %d runs: ",ball);scanf("%d",&runs); printf("\n");
total=total+runs;
if(runs==4 ||runs==6)
boundries=boundries+1;
else if(runs==0)
dots=dots+1;}
printf("Total runs: %d\nBoundries: %d\nDot balls=%d",total,boundries,dots);
return 0;}