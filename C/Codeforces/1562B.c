#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int k;
    scanf("%d",&k); 
    char s[k];
    scanf("%s",s);
    int i,j,flag=1;
    for(i=0;i<k;i++)
    {
      if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9')
      {
        printf("1\n");
        printf("%d\n",s[i]-48);
        flag=2;
        break;
      }
    }  
    if(flag==2)
    {
      continue;
    }
    int x;
    for(i=0;i<k;i++)
    {
      for(j=i+1;j<k;j++)
      {
        x=(s[i]-48)*10 + (s[j]-48);
        if(x!=23 && x!=37 && x!=53 && x!=73)
        {
          printf("2\n");
          printf("%d\n",x);
          flag=0;
          break;
        }
      }
      if(flag==0)
      {
        break;
      }
    }
  }
}