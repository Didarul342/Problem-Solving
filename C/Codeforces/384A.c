#include<stdio.h>
char s[1001];
int main()
{
  int n;
  scanf("%d",&n);
  int i,j,x;
  x=(n*n+1)/2;
  printf("%d\n",x);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if((i+j)%2==0)
      s[j]='C';
      else
      s[j]='.';
    }
    printf("%s\n",s);
  }
}