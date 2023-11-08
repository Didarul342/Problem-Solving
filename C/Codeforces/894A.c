#include<stdio.h>
#include<string.h>
int main()
{
  char s[101];
  scanf("%s",s);
  int len,i,j,k,c=0;
  len=strlen(s);
  for(i=0;i<len;i++)
  {
    for(j=i+1;j<len;j++)
    {
      for(k=j+1;k<len;k++)
      {
        if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
        c++;
      }
    }
  }
  printf("%d\n",c);
}