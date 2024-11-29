#include<stdio.h>
void main()
{
int a;
printf("Enter the Year :");
scanf("%d",&a);
if ( (a%4 == 0 && a%100 != 0) || (a%400 == 0) )//Because there is no leap year in BC 
 {    printf("This is a Leap year ");
 }
else 
    printf(" This is a not leap year:\n");
}
