#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  double i,sum=0;
  for(i=n;i>=1;i--)
  {
    sum+=1/i;
  }
  printf("%f\n",sum);
}