#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int s;
  
  if(m==0) printf("1\n");
  else if(n==m) printf("0\n");
  else
  {
    s=n-m;
    if(s<=m) printf("%d\n",s);
    else 
    {
      printf("%d\n",m);
    }
  }
}