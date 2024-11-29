#include<stdio.h>
#include<math.h>
void main()
{
int N,m=2,i=2;

double x,sum=2;
printf("Enter any two numbers:");
scanf("%d%lf",&N,&x);
while (i<=N){
   if (i%2==0)
      sum-=2*m*pow(x,(i-1));
   else
      sum+=2*m*pow(x,(i-1));
   
   i=i+1;
   m=m+1;
 }
printf("The sum is %lf",sum);
}
