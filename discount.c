#include<stdio.h>
void main()
{
int a;
printf("Enter the Amount of Purchase :");
scanf("%d",&a);
if (a>0 && a<=1000)
   printf("You get 5 percent discount\n");
else if (a>1000 && a<=5000)
   printf("You get 10 percent Discount\n");
else if (a>5000 && a<=10000)
   printf("You get 20 percent Discount\n");
else 
   printf("You will get only 20 percent Discount\n");  
}
