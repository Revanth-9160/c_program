#include<stdio.h>
int main()
{
int a,i=1;
printf("Enter a numbers");
scanf("%d",&a);
do
{printf("%d X %d = %d\n",a,i,a*i);
i++;}while (i<=10);
}
