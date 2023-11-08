#include<stdio.h>
int main()
{
	int d1,d2,d3;
	scanf("%d %d %d",&d1,&d2,&d3);
	int m1,m2,m3,m4;
	m1=d1+d2+d3;
	m2=d1*2+d2*2;
	m3=2*(d1+d3);
	m4=2*(d2+d3);
	if(m1<=m2 && m1<=m3 && m1<=m4) printf("%d",m1);
	else if(m2<=m1 && m2<=m3 && m2<=m4) printf("%d",m2);
	else if(m3<=m1 && m3<=m2 && m3<=m4) printf("%d",m3);
	else printf("%d",m4); 
}