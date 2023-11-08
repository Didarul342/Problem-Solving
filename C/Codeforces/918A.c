#include<stdio.h>
int main()
{
  int n,f1,f2,fn;
  scanf("%d",&n);
  f1=1;
  f2=1;
  fn=f1+f2;
  printf("O");
  for(int i=2;i<=n;i++)
  {
    if(i==fn)
    {
      printf("O");
      f1=f2;
      f2=fn;
      fn=f1+f2;
    }
    else
    {
      printf("o");
    }
    
  }
  printf("\n");
}