#include<stdio.h>
int main()
{
    int arr[10][10];
    int r,c;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<c;i++)
    {
        if(i%2==0)
        {

        for(int j=0;j<r;j++)
        {
               printf(" %d ",arr[j][i]);
        }
        }
        else
        {

            for(int j=r-1;j>=0;j--)
        {
               printf(" %d ",arr[j][i]);
        }
        }
    }
}
