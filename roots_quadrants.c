#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,x1,x2,d,i;
printf("Enter the values :");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if (d>0)
 i=1;
else if (d<0)
 i=2;
else 
 i=3;
switch (i)
{
 case 1 :{
 x1=(-b + sqrt(d))/2*a;
 x2=(-b - sqrt(d))/2*a;
 printf("The roots are real roots and those are %d and %d\n",x1,x2);
 break;}
 case 2 :{
 x1=(-b + sqrt(d))/2*a;
 x2=(-b - sqrt(d))/2*a;
 printf("The roots are imaginary or complex roots \n");
 break;}
 case 3 :{
 x1=(-b + sqrt(d))/2*a;
 x2=(-b + sqrt(d))/2*a;
 printf("The roots are equal the values are %d and %d\n",x1,x2);
 break;}
 default :
 printf("No other case than those ");
 }
 
}
