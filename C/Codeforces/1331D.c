#include<stdio.h>
int main()
{
  char s[7];
  scanf("%s",s);
  if(s[6]%2==0)
  {
    printf("0");
  }
  else printf("1");
}