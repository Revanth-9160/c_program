#include<stdio.h>
int n,m,i=0,r,sum=0,num;
int dec_bin(int);
int main()
{
printf("Enter a Number:");
scanf("%d",&n);
num=dec_bin(n);
//printf("The Binary Equivalent is : %d",num);
}
int dec_bin(int n)
{

while (n>0)
{
r=n%2;
sum=sum*10+r;
n=n/2;
}

printf("\n");

while (sum>0)
{
  m=sum%10;
  i=i*10+m;
  sum=sum/10;
 
 }
printf("%d",i);
printf("\n");
}
