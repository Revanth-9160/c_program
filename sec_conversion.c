#include<stdio.h>
int main()
{
int s,m,h;
printf("Enter the value for seconds:\t");
scanf("%d",&s);
h=s/3600;
s=s%3600;
m=s/60;
s=s%60;
printf("Hours:%d\n",h);
printf("Minutes:%d\n",m);
printf("Seconds:%d\n",s);
}
