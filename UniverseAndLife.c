#include<stdio.h>

int main(){
    short int n[1000007];
    short int  t;
    unsigned int i=0;
    
    while(1){
        scanf("%d",&t);
        
        if(t==42)
            break;
            
        n[i] = t;
        ++i;
    }
    ++i;
    t = i;
    
    for(i=0;i<t;++i){
        printf("\n%d",n[i]);
    }
}
