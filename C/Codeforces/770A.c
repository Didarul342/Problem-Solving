#include<stdio.h>
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  int i,d;
  for(i=0;i<n;i++)
  {
    d=i%k;
    printf("%c",d+97);
  }
  printf("\n");
}