#include<stdio.h>
int main()
{
  int A,a,i,max1=0;
  scanf("%d",&A);
  for(i=1;i<=A;i++)
  {
    scanf("%d",&a);
    if(max1<a)
    max1=a;
  }
  int B,b,j,max2=0;
  scanf("%d",&B);
  for(j=1;j<=B;j++)
  {
    scanf("%d",&b);
    if(max2<b)
    max2=b;
  }
  printf("%d %d\n",max1,max2);
}