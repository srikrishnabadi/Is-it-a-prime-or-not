#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,flag=0;
    printf("Enter any number to check whether it is prime or not\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            flag=1;
    }
    if(flag==0)
        printf("The given number is prime.....\n");
    else
        printf("The given number is not a prime.....\n");
    return 0;
}
