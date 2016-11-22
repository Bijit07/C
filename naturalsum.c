#include<stdio.h>
#include<conio.h>

int main()
{
int n,i,sum=0;
printf("Enter the value of 'n':");
scanf("%d",&n);
for(i=1;i<=n;i++){

sum=sum+i;
printf("Sum of square of 'n'natural nos=%d",sum);
}


return 0;
}
