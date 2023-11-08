#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  char s1[n+1],s2[n+1];
  scanf("%s",s1);
  scanf("%s",s2);
  int i,diff,sum=0,x;
  for(i=0;i<n;i++)
  {
    diff=abs(s1[i]-s2[i]);
    if(diff<=5)
    {
      sum+=diff;
    }
    else
    {
      if(s1[i]<s2[i])
      {
        x=s1[i]+1+(9-s2[i]);
        sum+=x;
      }
      else if(s1[i]>s2[i])
      {
        x=s2[i]+1+(9-s1[i]);
        sum+=x;
      }
    }
  }
  printf("%d\n",sum);
}