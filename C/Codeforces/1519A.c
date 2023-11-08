#include<stdio.h>
int main()
{
  long long t;
  scanf("%lld",&t);
  while(t--)
  {
    long long r,b,d;
    scanf("%lld %lld %lld",&r,&b,&d);
    if(r>b)
    {
      if(r<=b*(d+1)) printf("YES\n");
      else printf("NO\n");
    }
    else
    {
      if(b<=r*(d+1)) printf("YES\n");
      else printf("NO\n");
    }
  }
}