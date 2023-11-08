#include<stdio.h>
int main()
{
  int n,x;
  scanf("%d %d",&n,&x);
  int i,num,sum=0;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&num);
    sum+=num;
  }
  if(sum<0)
  sum*=-1;
  int res;
  if(sum%x==0)
  {
    res=sum/x;
    printf("%d\n",res);
  }
  else
  {
    res=sum/x+1;
    printf("%d\n",res);
  }
}