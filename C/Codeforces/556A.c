#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  int n;
  int c1=0, c2=0;

  scanf("%d",&n);
  char ch[n];
  scanf("%s",ch);
  for(int i=0; i<n; i++)
  {
      if( ch[i]== '1' )
      {

        c1++;
      }
      else
      {
          c2++;
      }

  }
  
  printf("%d", abs(c1-c2));
  
   return 0;
}