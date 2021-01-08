#include<stdio.h>
#include<string.h>
int main()
{
        int count=0;
        char ch[100];
        printf("Enter String");
        scanf("%s",ch);
        int n=strlen(ch);
        for(int i=0;i<=n-1;i++)
        {
            for(int j=i;j<=n-1;j++)
            {
               count++;
            }
        }
        printf("Total Substrings = %d",count);
}

