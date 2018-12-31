#include<stdio.h>

int main(){
    unsigned long long a,b,i,t,count=1,max,min;

    scanf("%ld%ld",&a,&b);

    
    min = (a <= b) ? a : b;
    max = (a > b) ? a : b;
    

    t = min/2;
    
    if((a%2!=0 && b%2!=0)){

    for(i=3;i<=t;i+=2){
         if(a%i==0 && b%i==0)
                  ++count;
      
    }
    
    if(max%min==0) ++count;
    
    
    
    }else{
        for(i=2;i<=t;i++){
         if(a%i==0 && b%i==0)
                  ++count;
      
    }
    
    if(max%min==0) ++count;
    
    }
    
    
    printf("%ld",count);
    
}
    
    

    
