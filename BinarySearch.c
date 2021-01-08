#include<stdio.h>
int main()
{
    int n,arr[100],search;
    int i;
    printf("Enter Size of the Array");
    scanf("%d",&n);
    printf("Enter Elements");
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("Enter Element to search");
    scanf("%d",&search);
    int lb=0,ub=n-1;
    while(lb<=ub)
    {
         int mid=(lb+ub)/2;
         if(search==arr[mid])
         {
             printf("Element found at %d index",mid);
             break;
         }
         else if(search<arr[mid])
         {

             ub=mid-1;
         }
         else
         {

             lb=mid+1;
         }
         mid=(lb+ub)/2;
    }
    if(lb>ub)
    {
        printf("Element not found in the array");
    }

}
