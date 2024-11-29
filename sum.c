#include<stdio.h>
int main()
{
int sum=0,n,i=1;
printf("Enter a num:");
scanf("%d",&n);
while (i<=n)
  {
    sum=sum+i;
    i++;
  }
printf("Sum of naturals numbers is %d\n",sum);
}   
