#include<stdio.h>
int main()
{
int n,i,m=0;
printf("Enter a number:");
scanf("%d",&n);
for (i=1;i<=n;i++)
  {
  m=m+i;
  /*printf("%d\n",i);*/ //we can access them like these also
  printf("The natural numbers are :%d\n",i);
  }
printf("The sum of natural numbers are : %d\n",m);
}
