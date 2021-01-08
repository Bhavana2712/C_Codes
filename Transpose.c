#include<stdio.h>
int main()
{
    int arr[10][10],key;
    int r,c;
    printf("Enter Rows & Cols");
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of the Array is\n");
     for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
