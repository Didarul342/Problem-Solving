#include<stdio.h>
int main()
{
  long long n;
  scanf("%lld",&n);
  long long rem,sub,res;
  rem=n%10;
  if(rem>=6)
  {
    sub=10-rem;
    res=n+sub;
    printf("%lld\n",res);
  }
  else
  {
    res=n-rem;
    printf("%lld\n",res);
  }
}