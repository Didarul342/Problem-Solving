#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  char s[n+1];
  scanf("%s",s);
  int i,j,c1=0,c2=0;
  for(i=0;i<n;i++)
  {
    if(s[i]=='1')
    c1++;
    else
    c2++;
  }
  if(c1>=1) printf("1");
  for(j=1;j<=c2;j++)
  {
    printf("0");
  }
  
}