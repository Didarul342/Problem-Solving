#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int a,b,c,max=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
      max=a;
    }
    else if(b>a && b>c)
    {
      max=b;
    }
    else
    {
      max=c;
    }
    printf("%d\n",max+1);
  }
}