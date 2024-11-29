#include<stdio.h>
void main()
{
int a,m,s=0,n;
printf("enter a number:");
scanf("%d",&a);
n=a;
while (a>0)
   {  m=a%10;
      s=s*10+m;
      a=a/10;
   }
printf("The reverse number is : %d\n",s);
if (n == s)
  printf("They are palindrome:\n");
else
  printf("They are not in plaindrome\n");

     
} 
