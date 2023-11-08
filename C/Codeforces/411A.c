#include<stdio.h>
#include<string.h>
int main()
{
  char s[101];
  scanf("%s",s);
  int len,i,c1=0,c2=0,c3=0,c4=0;
  len=strlen(s);
  for(i=0;i<len;i++)
  {
    if (s[i]>64 && s[i]<91)
    {
      c1++;
    }
    else if (s[i]>96 && s[i]<123)
    {
      c2++;
    }
    else if(s[i]>47 && s[i]<58)
    {
      c3++;
    }
  }
  if(len>=5 && c1>0 && c2>0 && c3>0)
  {
    printf("Correct\n");
  } 
  else printf("Too weak\n");
}