#include<stdio.h>
int main()
{
    int a,b,i,k;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    k=a>b?a:b;
    while(1)
    {
        if(k%a==0 && k%b==0)
        {
            printf("The LCM is %d",k);
            break;
        }
      ++k;
    }
    return 0;
    
}