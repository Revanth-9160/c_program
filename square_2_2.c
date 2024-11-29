#include<stdio.h>
int square(int);
int main()
{
int s;
printf("The side of a square is ");
scanf("%d",&s);
square(s);
}
int square(int m)
{
int area;
area=m*m;
printf("Area is %d\n",area);
}


