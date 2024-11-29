#include<stdio.h>
int main()
{
float s,r,a1,a2,a3;
printf("Enter the value of side of a square:");
scanf("%f",&s);
printf("Enter the value of radius:");
scanf("%f",&r);
a1=s*s;
a2=s*s*s;
a3=3.14*r*r;
printf("Area of a Square:%f\n",a1);
printf("Area of a cube:%f\n",a2);
printf("Area of a Triangle:%f\n",a3);
}

