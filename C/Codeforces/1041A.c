#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  long long a[n],i,max=0,min=2000000000,Res;
  for(i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
    if(min>a[i])
    min=a[i];
    if(max<a[i])
    max=a[i];
  }
  Res=(max-min)-(n-1);
  printf("%lld\n",Res);
}