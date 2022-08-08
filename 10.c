#include<stdio.h>
int main()
{
    int n,i,k=0,p;
    printf("Enter an number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        k=n%10;
        p=(10*p)+(k);
        n=n/10;
    }
    printf("Reversr number is %d",p);
    return 0;
}