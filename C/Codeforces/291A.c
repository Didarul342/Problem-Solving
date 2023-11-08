#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n); 
  long long a[n],temp;
  long long i,j,c=0;
  for(i=0;i<n;i++)
  {
    scanf("%lld",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]!=0 && a[i]==a[i+1] && a[i]==a[i+2])
    {
      printf("-1\n");
      return 0;
    }
    else if(a[i]!=0 && a[i]==a[i+1])
    {
      c++;
    }
  }
  printf("%lld\n",c);
}