#include<stdio.h>
void square();
int a,area,per;

void main()

{
 printf("Enter a number:");
 scanf("%d",&a);
 square();

}

void square()
{
 area=a*a;
 per=4*a;
 printf("The area is : %d\n",area);
 printf("The Perimeter is %d\n",per);

}
