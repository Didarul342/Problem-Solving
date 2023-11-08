#include<stdio.h>
int main()
{
  int n,t;
  scanf("%d %d",&n,&t);
  int i,a,s=0;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
    s+=86400-a;
    if(s>=t) 
    {
      printf("%d\n",i);
      return 0;
    }
  }
}