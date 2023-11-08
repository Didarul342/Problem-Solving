#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  char s[n+1];
  scanf("%s",s);
  if(s[0]=='S' && s[n-1]=='F')
  printf("YES");
  else
  printf("NO");
}