#include <stdio.h>
int main() {
int  students,marks,sum,highest=0,passed,failed;
sum=0;
passed=0;failed=0;
printf("Number of students: ");scanf("%d",&students);
for(int i=1;i<=students;i++) {
printf("Marks of student %d: ",i);scanf("%d",&marks);printf("\n");
if(marks<50)
failed=failed+1;
else
passed=passed+1;
sum=sum+marks;
   if(marks>highest) 
highest=marks; 
}
float average=sum/students;
printf("Passed: %d\nFailed: %d\nHighest: %d\nAverage: %f",passed,failed,highest,average);



return 0;}