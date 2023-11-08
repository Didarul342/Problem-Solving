#include<stdio.h>
int main()
{
  long long n,k;
  scanf("%lld %lld",&n,&k); 
  long long x,y,z;
  x=n/(2*(k+1));
  y=x*k;
  z=n-(x+y);
  printf("%lld %lld %lld",x,y,z);
}