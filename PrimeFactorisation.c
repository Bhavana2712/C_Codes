
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter Number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
          count=0;
          while(n%i==0)
          {
              count++;
              n=n/i;
          }
          for(int j=0;j<count;j++)
          {
              printf("%d ",i);
          }
        }
    }

}
