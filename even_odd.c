#include<stdio.h>
int a,m;
int even_odd(int);
int main()
{
printf("Enter the values:");
scanf("%d",&a);
even_odd(a);
}
int even_odd(int a)
{
if(a%2==0)
 printf("It is even\n");
else 
 printf("It is odd\n");
}
