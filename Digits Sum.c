#include<stdio.h>

int sum(int x);

int main()
{
    int n,a;
    printf("Enter any no.:");
    scanf("%d",&n);
    a = sum(n);
    printf("\nSum of digits of %d is %d",n,a);
    return 0;
}

int sum(int x)
{
    int y;
    if(x==0)
    {
        return 0;
    }
    else
    {
        y = x%10 + sum(x/10);
        return y;
    }
}
