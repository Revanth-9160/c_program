#include<stdio.h>
int area(int);
int per(int);
int main()
{
int a,s,m;
printf("Enter the value of a side ");
scanf("%d",&a);
s=area(a);
m=per(a);
printf("The area and perimeter is %d %d\n",s,m);
}
int area(int b)
{
int area;
area=b*b;
return area;

}
int per(int b)
{
int per;
per=4*b;
return per;
}
