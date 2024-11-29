#include<stdio.h>
int main()
{
int count=1,a=0,b=1,next,n,sum=1;
printf("Enter a number");
scanf("%d",&n);
while (count<=n){
  if (count == 1){
   printf("%d",a);}
  else if (count == 2){
   printf("%d",b);
   }
  else {
    next = a+b;
    sum=sum+next;
    printf("%d",next);
   
    a=b;
    b=next;}
    count++;
  }
   printf("%d",sum);
  printf("\n");
}
