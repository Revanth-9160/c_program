/*#include<stdio.h>
#include<math.h>
int main()
{
int n,i=1;
double x,sum = 1;
printf("Enter a num:");
scanf("%d%lf",&n,&x);
while (i<=n)
 {
   if (i%2==0){
     sum+=pow(x,i); //Add even powers of X
     }
   else {
     sum-=pow(x,i); //Sub odd powers of x
     } 
   i++;  
  }
printf("Sum of series is %.2lf\n",sum);
 
}*/

#include<stdio.h>
int main() {
int N, I = 1;
double X, SUM = 0, TERM = 1; // Initialize SUM and TERM
// Step-2: Input value of N and X
printf("Enter the value of X and N: ");
scanf("%lf %d", &X, &N);
// Step-4 to Step-8: Loop to calculate the sum of the series
while (I <= N) {
// Add the current TERM to SUM
SUM += TERM;
// Update TERM for the next iteration
TERM = (I + 1) * TERM * X * (-1); // Alternating sign and increasing power
// Increment I for the next term
I++;
}
// Step-9: Display the sum
printf("The sum of the series 1 - 2X + 3X^2 - 4X^3 + ... + N*X^(N-1) is: %.2lf\n",
SUM);
return 0;
}
   
