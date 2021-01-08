#include<stdio.h>
#include<string.h>
int main()
{
        char ch[100];
        printf("Enter String");
        scanf("%s",ch);
        int n=strlen(ch);
        printf("SubStrings are");
        for(int i=0;i<=n-1;i++)
        {
            for(int j=i;j<=n-1;j++)
            {
                for(int k=i;k<=j;k++)
                {
                    printf("%c ",ch[k]);
                }
                printf("\n");
            }

        }
}
