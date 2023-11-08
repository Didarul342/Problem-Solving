#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  char s[n+1];
  scanf("%s",s);
  int i,c=0;
  for(i=0;i<n;i++)
  {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
    c++;
    else 
    c=0;
    if(c<=1) printf("%c",s[i]);
    else continue;
  }
  printf("\n");
}