#include<stdio.h>
int main()
{
int a,b;
printf("Entera number:");
scanf("%d%d",&a,&b);
while (a != b){
    if (a>b)
        a=a-b;
    else 
        b=b-a;
           }
  printf("gcd=%d\n",b);
 
}
