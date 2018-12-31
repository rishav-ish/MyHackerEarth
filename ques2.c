#include<stdio.h>

int main(){
    long n,x,y,i=0,t;

    scanf("%ld%ld%ld",&n,&x,&y);

    for(i=0;i<n;++i){
          scanf("%ld",&t);


          if(t< x ||  t>y){
                printf("NO");
                return 0;
          }
    }

    printf("YES");

}
