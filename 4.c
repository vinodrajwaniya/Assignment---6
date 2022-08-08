#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter an number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(2*i);
    }
    printf("Sum of square is %d",sum*sum);
    return 0;
}