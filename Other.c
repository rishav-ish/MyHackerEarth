#include<stdio.h>
    int main()
    {
        int t;
    int n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        if(m%n==0)
         printf("Yes\n");
        else
        printf("No\n");
        
    }
    return 0;
     
    }


