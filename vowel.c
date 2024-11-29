#include<stdio.h>
void main()
{
char m;
printf("Enter any letter:");
scanf("%c",&m);
switch (m)
{
case ('A' | 'a') : 
       printf("it is vowel");
       break;
case 'E' :
       printf("it is vowel");
       break;
case 'I' :
       printf("it is vowel");
       break;
case 'O' :
       printf("it is vowel");
       break;
case 'U' :
       printf("it is vowel");
       break;
default:
       printf("it is consonent");                                   
}

}
