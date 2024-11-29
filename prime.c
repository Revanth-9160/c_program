#include<stdio.h>
void main()
{
int a,i=1,c=0;
printf("Enter a Number:");
scanf("%d",&a);
for (i=1;i<=a;i++)
    if (a%i==0)
      c=c+1;
if (c==2)
   printf("This is a prime number\n");
else 
   printf("This is not a prime Number\n");     
}
