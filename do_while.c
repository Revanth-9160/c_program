#include<stdio.h>
int main()
{
int i=0,n,sum=0;
printf("Enter a num");
scanf("%d",&n);
do{
sum=sum+i;
i=i+1;
}while (i<=n);
printf("SUM is =%d\n",sum);
}
