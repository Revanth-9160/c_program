#include<stdio.h>
int n;
float a,b,s,m,calc(float,float);
int main()
{
printf("Enter the values:");
scanf("%f%f",&a,&b);
printf("Enter the choice\n");
printf("1:Add,2:sub,3:Mul,4:Div\n");
scanf("%d",&n);
m=calc(a,b); 
printf("The operations value is %f\n",m);
}
float calc(float a, float b)
{
switch(n)
{
 case 1 :{
  s=a+b;
  break;
  }
  case 2 :{
  s=a-b;
  break;
  }
  case 3 :{
  s=a*b;
  break;
  }
  case 4:{
  s=a/b;
  break;
  }
  default :
    printf("Invalid choice\n");
 }  
 return s;
 }
