#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i,j,c1,c2;
  for(i=0;i<n;i++)
  {
    c1=abs(n/2-i);
    for(j=0;j<n;j++)
    {
      c2=abs(n/2-j);
      if(c2<=n/2-c1) printf("D");
      else printf("*");
    }
    printf("\n");
  }
}