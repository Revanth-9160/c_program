#include<stdio.h>
int i,m=0,n,k,s;
int ary[100],max(int);
int main()
{
printf("Enter the max you want");
scanf("%d",&n); 
printf("The requried values in array");
for (i=0;i<n;i++)
{ scanf("%d",&ary[i]);
 }
s=max(n);
printf("The max value is %d",s);
}
int max(int n)
{
for (i=0;i<n;i++)
{
 if (m<ary[i])
  m=ary[i];
 }
 k=m;
 return k;
} 

