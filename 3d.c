#include<stdio.h>
int main()
{
int n,r,s=0,m,l;
printf("Enter a Number:");
scanf("%d",&n);
m=n%10;
while (n>=1){
    r=n%10;
    s=s*10+r;
    n=n/10;}
l=r;
if (m==l)
   printf("The last and First number are same");
else 
   printf("Not same");

}
