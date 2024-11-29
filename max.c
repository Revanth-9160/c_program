#include<stdio.h>
int a,b,c,m;
int max(int,int,int);
int main()
{
printf("Enter the values:");
scanf("%d%d%d",&a,&b,&c);
m=max(a,b,c);
printf("The max term is %d",m);
}
int max(int a, int b, int c)
{

if (a>=b && a>=c)
 //return a;
 m=a;
else if (b>=a && b>=c)
 //return b;
 m=b;
else 
 //return c;
 m=c;
return m;
 }
