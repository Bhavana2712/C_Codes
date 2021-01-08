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
    printf("enter key to be searched");
    scanf("%d",&key);
    int k=c-1,l=0;
    while(l<=r-1&&k>=0)
    {

    if(key>arr[l][k])
    {
        l++;
    }
    else if(arr[l][k]==key)
    {
        printf("key is present at index %d %d",l,k);
        return 0;
    }
    else
    {
        k--;
    }
   // printf("key is not present");
    }
}
