#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  char a[51];
  scanf("%s",a);
  int i,d,s1=0,s2=0,c=0;
  d=n/2;
  for(i=0;i<n;i++)
  {
    if(a[i]=='4' || a[i]=='7')
    {
      c++;
    }
    if(i<d)
    s1+=a[i];
    else
    s2+=a[i];
  }
  if(c==n && s1==s2) printf("YES");
  else printf("NO");
}