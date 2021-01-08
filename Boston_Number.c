#include<stdio.h>
int main()
{
    int n,i,count=0,sum=0,rem,sum1=0;
    printf("Enter Number");
    scanf("%d",&n);
    int temp=n;
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
             sum+=i;
          }
        }
    }
      printf("%d",sum);
    while(temp!=0)
    {
        rem=temp%10;
        sum1+=rem;
        temp/=10;
    }
      printf("\n%d",sum1);

      if(sum==sum1)
      {
          printf("\nBoston Number");
      }
      else
      {
           printf("\nNot a Boston Number");
      }
}
