#include<stdio.h>
#include <string.h>
int main()
{
  int n;
  scanf("%d",&n); 
  int count=0,i,num,pos,Res;
  for(i=1;i<=n;i++)
  {
    if(i>99)
    count+=3;
    else if(i>9)
    count+=2;
    else
    count++;
    if(count>=n)
    {
      num=i;
      break;
    }
  }
  if(count==n)
  {
    Res=num%10;
    printf("%d\n",Res);
  }
  else
  {
    pos=count-n;
    if(pos==1)
    {
      Res=(num/10)%10;
      printf("%d\n",Res);
    }
    else
    {
      Res=(num/100)%10;
      printf("%d\n",Res);
    }
  }
}