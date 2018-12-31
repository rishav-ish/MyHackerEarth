#include<stdio.h>

#define MAX 20

int main(){
  
    char x[MAX];
    unsigned int k,i,j;

    scanf("%s%d",x,&k);

    for(i=0;i<k;++i){
           j = 0;
           while(x[j]!='\0'){

               if(x[j]!='9'){
                     x[j]='9';
                     break;
               }
              
               ++j;
           }

    }

    printf("%s",x);

}
