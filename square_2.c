#include<stdio.h>
int square();
int main()
{
int s;
s=square();
printf("Area is %d\n",s);
}
int square()
{
int a,area;
printf("Enter the value of a side\n");
scanf("%d",&a);
area=a*a;
return area;
}
