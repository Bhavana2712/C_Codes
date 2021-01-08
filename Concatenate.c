#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter 1st String\n");
    scanf("%s",a);
    printf("Enter 2nd String\n");
    scanf("%s",b);
    int x=strlen(a);
    int y=strlen(b);
    for(int i=0;i<y;i++)
    {

        a[x]=b[i];
        x++;
    }
    a[x]='\0';
    printf("Concatenate String is\n");
    printf("%s",a);
}
