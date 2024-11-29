#include<stdio.h>
void absolute();
int a,c;

void main()
{
  printf("Enter a number:");
  scanf("%d",&a);
  absolute();
}

void absolute()
{
  if (a<0)
   {c=-a;
   printf("The absolute value is %d\n",c);
   printf("The absolute value is %d\n",-a);
    }
  else 
  {
    c=a;
    printf("The absolute value is %d\n",c);
    printf("The absolute value is %d\n",a); 
  }
  
}  
