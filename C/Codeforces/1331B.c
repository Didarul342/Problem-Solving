#include<stdio.h>
#include<math.h>
int main()
{
  int num;
  scanf("%d",&num);
  int i,r,a,b;
  r=sqrt(num);
  for(i=2;i<=r;i++)
  {
    if(num%i==0)
    {
      a=i;
      b=num/a;
      printf("%d%d",a,b);
    }
  }
}