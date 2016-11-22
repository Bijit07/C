#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,sum=0;
    printtf("Enter the value of 'n':\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i*i;
        printf("The sum of :%d %d",i,sum);

    }
    return 0;
}
