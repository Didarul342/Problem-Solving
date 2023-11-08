#include<stdio.h>
#include<stdlib.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int f = abs(a-b)*2;
    if(f < a || f < b || f < c)
    {
      printf("-1\n");
      continue;
    }
    if(abs(a-b) == 1)
    {
      if(!(a = 1 && b == 2))
      {
        printf("-1\n");
        continue;
      }
    }
    int x = abs(a-b),y;

    if((c+x)%f == 0)
    {
      printf("%d\n",f);
    }
    else
    {
      printf("%d\n",(c+x)%f);
    }
  }
}