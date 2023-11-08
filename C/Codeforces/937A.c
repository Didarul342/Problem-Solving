#include<stdio.h>
int main()
{
  int n,a,i,count=0,arr[601]={0};
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    if(a!=0 && arr[a]==0)
    {
      count++;
      arr[a]=1;
    }
  }
  printf("%d\n",count);
}