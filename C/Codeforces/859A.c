#include<stdio.h>

int main()
{
  int n,a,i,max=0,res=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if(a>max)
    max=a;
  }
  if(max>25)
  {
    res=max-25;
  }
  printf("%d\n",res);
}
