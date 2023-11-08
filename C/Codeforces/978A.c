#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n); 
  int a[n],b[1001]={0};
  int i,j,c=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    b[a[i]]++;
    if(b[a[i]]==1)
    {
      c++;
    }
    else continue;
  }
  printf("%d\n",c);
  for(j=0;j<n;j++)
  {
    b[a[j]]--;
    if(b[a[j]]==0)
    {
      printf("%d ",a[j]);
    }
  }
}