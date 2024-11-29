#include<stdio.h>
int main()
{
int a,s=0,r=0,m;
printf("Enter a number:");
scanf("%d",&a);
m=a;
while (a>=1)
 {
     r=a%10;
     s=s+r*r*r;
     a=a/10;
 }
if (m == s)
 printf("It is a armstrong number");
else 
 printf("Not a armstrong number");
}
