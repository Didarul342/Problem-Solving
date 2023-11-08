#include <stdio.h>
#include <string.h>

int main()
{
    
    int t;
    scanf("%d\n", &t);
    while(t != 0)
    {
        int n;
        scanf("%d\n", &n);
        
        char s[n];
        scanf("%s", s);
        
        int len=strlen(s);
        
        if(len==1)
        {
            printf("YES\n");
        }
        else if(len==2 && s[0]!=s[1])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        t--;
        
    }

}