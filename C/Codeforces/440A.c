#include<stdio.h>
int main()
{
  long long n;
  scanf("%lld",&n); 
  long long a,i,sum1=0,sum2;
  for(i=1;i<n;i++)
  {
    scanf("%lld",&a);
    sum1+=a;
  }
  sum2=(n*(n+1))/2;
  printf("%lld\n",sum2-sum1);
}