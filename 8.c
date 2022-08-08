#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter an number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        printf("This is prime number");
    else
        printf("This is not a prime number");
    return 0;
}