#include<stdio.h>
void main()
{
float x,y;
printf("Enter the vlaues of X and Y:");
scanf("%f%f",&x,&y);
if (x>=0 && y>0) 
	printf("They lies in Quad1 that is (%f,%f)\n",x,y);
else if (x<0 && y>=0)
	printf("They lies in Quad2 that is (%f,%f)\n",x,y);
else if (x<0 && y<0)
	printf("They lies in Quad3 that is (%f,%f)\n",x,y);
else if (x>=0 && y<0)
	printf("They lies in Quad4 that is (%f,%f)\n",x,y);
else
        printf("Its origin\n");
}
