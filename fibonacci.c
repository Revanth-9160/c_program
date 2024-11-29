#include<stdio.h>
int main()
{
int n,a=0,b=1,next,s=1;
printf("Enter a number for fibonacci num:");
scanf("%d",&n);
int count =1;
while (count<=n){
   if (count == 1){
     printf("%d\n",a);
    }
   else if (count == 2){
      printf("%d\n",b);
      }
   else {
    next = a+b;
    s=s+next;
    printf("%d\n",next);
    a=b;
    b=next;
    }
    count++;
    }
printf("Sum is %d",s);
 
}
