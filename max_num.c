#include<stdio.h>
void max();
int a,b,c;

void main()
{
 printf("Enter three numbers");
 scanf("%d%d%d",&a,&b,&c);
 max();

}

void max()
{

 if (a>=b && a>=c)
  printf("%d value is greater among three\n",a);
 else if (b>=a && b>=c)
  printf("%d value is greatest among the three\n",b);
 else
  printf("%d value is greates among the three\n",c);
  
}
