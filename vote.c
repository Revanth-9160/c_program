#include<stdio.h>
int main()
{
int n;
printf("Enter age to know whether he is elidgble for vote");
scanf("%d",&n);
if (n>=18)
	printf("He is Elidgble for voting\n");
else if (n<18)
	printf("He is not Elidgble for voting\n");
else if (n>0)
	printf("ERROR : Check your input\n");
}
