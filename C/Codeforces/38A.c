#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int d[100],a,b,i;
  for(i=1;i<n;i++)
  {
    scanf("%d",&d[i]);
  }
  scanf("%d %d",&a,&b);
  int j,s=0;
  for(j=a;j<b;j++)
  {
    s+=d[j];
  }
  printf("%d\n",s);
}