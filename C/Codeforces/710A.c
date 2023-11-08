#include<stdio.h>
int main()
{
 char c;
 int d;
 scanf("%c%d",&c,&d);
 if(c=='a' || c=='h')
 {
   if(d==1 || d==8)
   printf("3");
   else
   printf("5");
 }
 else if(d==1 || d==8)
 printf("5");
 else
 printf("8");
}