#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int x=strlen(a);
    int y=strlen(b);
    if(x!=y)
    {
        printf("the string are not permutations of each other");
    return 0;
    }
    int freq[26]={0};
    for(int i=0;i<x;i++)
    {
       int index=a[i]-'a';
       freq[index]++;
    }
     for(int i=0;i<y;i++)
    {
       int index=b[i]-'a';
       freq[index]--;
    }
     for(int i=0;i<26;i++)
    {
      if(freq[i]!=0){
        printf("the string are not permutations of each other");
    return 0;
      }
    }
    printf("the string are permutations of each other");


}
