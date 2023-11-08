#include<stdio.h>
int main()
{
	int n,k,x[26]={0};	
	scanf("%d %d",&n,&k);
  int i,s=0;
  char ch;
	for(i=0;i<n;i++)
	{
		scanf(" %c",&ch);
		x[ch-65]++;
	}
	for(i=1;i<k;i++)
	{
		if(x[i]<x[s])
		s=i;
	}
	printf("%d\n",x[s]*k);
}