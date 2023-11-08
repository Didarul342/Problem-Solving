#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int i,a,max=0,sum=0,sub;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    sum+=a;
    if(a>max)
    max=a;
  }
  sub=sum-max;
  if(m>=sub) printf("YES");
  else printf("NO");
}