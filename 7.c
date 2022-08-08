#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter an number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("Number Digit is %d",i);
    return 0;
    }