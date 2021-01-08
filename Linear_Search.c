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
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            break;
        }
    }
    if(i<n)
          printf("Element %d is at %d",search,i);

    else
          printf("Element is not in the array");
}
