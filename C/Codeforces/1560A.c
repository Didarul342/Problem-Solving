#include<stdio.h>

int fun(int arr[], int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }  
  int temp[n];
  int j = 0;
  int i;
  for(i = 0; i < n - 1; i++)
    if (arr[i] != arr[i + 1])
    temp[j++] = arr[i];
    temp[j++] = arr[n - 1];

  for (i = 0; i < j; i++)
  {
    arr[i] = temp[i];
  }
  return j;
}

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int k;
    scanf("%d",&k);
    int arr[1005],cn=3;
    arr[1]= 1;
    arr[2]= 2;
    arr[3]= 4;

    for(int i=5; cn!=1001; i++)
    {

      if(i%3 !=0 && i%10 !=3)
      {
        cn++;
        arr[cn] = i;
      }
    }
    fun(arr,cn);
    printf("%d\n",arr[k]);
  }
}