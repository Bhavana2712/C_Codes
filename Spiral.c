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

}
