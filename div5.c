#include<stdio.h>
int main()
{
int i=1,n,m,p,a;
printf("Enter the number:\t");
scanf("%d",&n);
while (n){
  p=i*n;
  if (n%5==0){
  break ;}
  printf("%d\n",p);
  printf("Enter the number:");
  scanf("%d",&n);
  i=n;
  n=a;
  }
 
  
}
