#include<stdio.h>
int main()
{
    int n,i,k=1;
    printf("Enter an number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=k*i;
    }
    printf("Factorial is %d",k);

}