#include<stdio.h>
#include<string.h>
int main()
{
   int n;
    int j=0;
   scanf("%d ",&n);
    char ch[100],c[100];
   scanf("%s",ch);
  // int x=strlen(ch);
   for(int i=0;i<=strlen(ch)-1;i++)
   {

   if(i>=n-1)
   {
       c[j]=ch[i];
       j++;
   }
   }

   for(int i=0;i<n-1;i++)
   {
       c[j]=ch[i];
       j++;
   }
   printf("%s",c);
}
