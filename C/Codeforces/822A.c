#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int i,j,f=1;
  if(a<=b)
  {
    for(i=2;i<=a;i++)
    {
      f*=i;
    }
  }
  else
  {
    for(i=2;i<=b;i++)
    {
      f*=i;
    }
  }
  printf("%d",f);
}