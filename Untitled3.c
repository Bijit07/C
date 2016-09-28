#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
float p,t,r,CompoundIntrest;
printf("Enter a Principle:\n");
scanf("%f",&p);
printf("Enter a Time:\n");
scanf("%f",&t);
printf("Enter a Rate:\n");
scanf("%f",&r);
CompoundIntrest= p*pow(1-0.01*r,t)-p;
printf("Print CompoundIntrest=%f",CompoundIntrest);
getch();
}
