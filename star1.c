#include<stdio.h>
int main()
{
int n,i=1,r;
printf("Enter a number:");
scanf("%d",&n);
while (i<=n){
  r=1;
  while (r<=i){
    printf("* ");
    r++;}
  printf("\n");
  i++;}
  
}
