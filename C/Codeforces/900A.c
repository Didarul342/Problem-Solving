#include<stdio.h>
int main()
{
  int t,c1=0,c2=0;
  scanf("%d",&t);
  while(t--)
  {
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>0) c1++;
    else c2++;
  }
  if(c1<2 || c2<2) printf("Yes");
  else printf("No");
 
}