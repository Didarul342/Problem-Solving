#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int i,j,a,b,c=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d %d",&a,&b);
      if(a==1 || b==1)
      {
        c++;
      }
    }
  }
  printf("%d\n",c);
}