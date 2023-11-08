#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n); 
  int t[n],i,j,sub,sum=90,k,Res,c=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&t[i]);
  }
  if(t[0]>15) printf("15\n");
  
  else
  {
    for(j=0;j<n-1;j++)
    {
      sub=t[j+1] - t[j];
      if(sub>15)
      {
        sum=t[j] + 15;
        c++;
        break;
      }
    }
    if(c>0) printf("%d\n",sum);
    else
    {
      k=90 - t[n-1];
      if(k>=15)
      {
        Res=t[n-1] + 15;
        printf("%d\n",Res);
      }
      else printf("%d\n",sum);
    }
  }
}