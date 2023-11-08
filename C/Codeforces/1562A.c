#include<stdio.h>
int main()
{
  long long t;
  scanf("%lld",&t);
  while(t--)
  {
    long long l,r,d,m;
    scanf("%lld %lld",&l,&r); 
    d=r/2+1;
    if(d>=l)
    {
      m=r%d;
      printf("%lld\n",m);
    }
    else
    {
      m=r%l;
      printf("%lld\n",m);
    }
  }
}