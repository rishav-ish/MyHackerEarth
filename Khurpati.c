#include<stdio.h>

int main(){
    unsigned long int a,b,min,max,count=0,t;

    scanf("%ld%ld",&a,&b);

    min = (a <= b) ? a : b;
    max = (a > b) ? a : b;

   

    while(t!=1){
         t = min%max;

         min = min/t;
         max = max/t;
     
         ++count;
    }

    printf("%ld",count);
}
