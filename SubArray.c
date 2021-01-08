#include<stdio.h>
#include<string.h>
int main()
{
        int n,arr[100];
        printf("Enter size");
        scanf("%d",&n);
        printf("Enter Elements");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<=n-1;i++)
        {
            for(int j=i;j<=n-1;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    printf("%d ",arr[k]);
                }
                printf("\n");
            }

        }
}
