#include<stdio.h>
#include<string.h>
int main()
{
  int t;
  scanf("%d",&t); 
  while(t--)
  {
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int k,c=0;
    k=n-10;
    for(int i=0;i<k;i++)
    {
      if(s[i]=='8')
      {
        c++;
        break;
      }
    }
    if(c==1) printf("YES\n");
    else printf("NO\n");
  }
}