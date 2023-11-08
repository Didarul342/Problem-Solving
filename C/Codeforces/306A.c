#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int div,i;
  for(i=m;i>0;i--)
  {
    div = n/i;
    printf("%d ",div);
    n = n-div;
  }
  
}