#include<stdio.h>
int main()
{
int arr[10],n,sum=0,avg,i;
printf("Enter the total count of numbers in a array:");
scanf("%d",&n);
printf("Enter those values:");
for (i=0;i<n;i++)
 scanf("%d",&arr[i]);
for (i=0;i<n;i++)
 sum=sum+arr[i];
avg=sum/n;
printf("The sum of the elements in array is %d\n",sum);
printf("The average of elements %d\n",avg);
}
