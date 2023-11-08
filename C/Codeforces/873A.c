#include<stdio.h>
int main()
{
  int n,k,x,a[101];
  scanf("%d %d %d",&n,&k,&x);
  int i,j,sum=0,result;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(j=1;j<=n-k;j++)
  {
    sum+=a[j];
  }
  result=sum+k*x;
  printf("%d\n",result);
}