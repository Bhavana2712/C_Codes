#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Number");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("%d is not prime",n);
            break;
        }
    }
    if(n==i)
        printf("%d is prime",n);

}
