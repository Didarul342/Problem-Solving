#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[30],i,s1=0,s2=0,s3=0;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
    if(i%3==1)
    {
      s1+=a[i];
    }
    else if(i%3==2)
    {
      s2+=a[i];
    }
    else
    {
      s3+=a[i];
    }
  }
  if(s1>s2 && s1>s3) printf("chest");
  else if(s2>s1 && s2>s3) printf("biceps");
  else printf("back");
}