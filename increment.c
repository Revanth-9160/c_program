#include<stdio.h>
void main()
{
float a=100;
if (a>=0 && a<100)
  printf("The Total cost with dissount %f",a*0.01);
else if (a>=100 && a<500)
  printf("The total cost with discount %f",a*0.5);

}
