#include<stdio.h>
int a,s,absolute(int);
int main()
{
printf("Enter the values:");
scanf("%d",&a);
s=absolute(a);
printf("The value is %d\n",s);
}
int absolute(int a)
{
if (a<0)
 {
 return -a;
 }
else
 return a;
}
