#include<stdio.h>
void main()
{
int rate,pay,hours;
printf("Enter amount :");
scanf("%d",&rate);
printf("Enter the amount of hours worked in a week :");                                                               
scanf("%d",&hours);
pay=hours*(rate)*4;
printf("The Monthly Pay of an Employee is %d\n",pay);
}
