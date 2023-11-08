#include<stdio.h>
#include<string.h>
int main()
{
 int n,k;
 scanf("%d %d",&n,&k);
 char s[105];
 int i,j,c=0,x=0;
 for(i=1;i<=n;i++)
 {
   scanf("%s",s);
   for(j=0;j<strlen(s);j++)
   {
     if(s[j]=='4' || s[j]=='7')
     {
       c++;
     }
   }
   if(c<=k)
   {
     x++;
   }
   c=0;
 }
 printf("%d\n",x);
}