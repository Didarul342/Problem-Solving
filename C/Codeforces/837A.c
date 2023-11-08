#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d\n",&n);
  char s[n+1];
  fgets(s, n+1, stdin);
	int max=0,sum=0;
	for (i=0;i<n;i++) 
  {
		if (s[i]==32) 
    {
      sum=0;
    }
		else if(s[i]>=65 && s[i]<=90) 
		{
      sum++;
    }
		if (sum>max ) 
    max=sum;
	}
	printf("%d\n",max); 
}