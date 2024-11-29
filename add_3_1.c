#include<stdio.h>
int sum(int,int);
int main()
{
int a,b,s;
printf("Enter a number ");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("The Sum is %d\n",s);
}
int sum(int x,int y)
{
int s;
s=x+y;
return s;
}
