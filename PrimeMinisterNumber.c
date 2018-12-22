#include<stdio.h>

int primeNumber(unsigned long );
unsigned short int  digits(unsigned long);



void main(){
     
     unsigned long a,b,i,temp;
 
     scanf("%ld%ld",&a,&b);

     if(a>b){
	 temp = b;
         b = a;
         a = temp;
     }

     for(i=a;i<=b;i++){
           if(primeNumber(i)==0 || i == 1)
		 continue;
           else{
		if(primeNumber(digits(i))==1)
			printf("%ld ",i);
           }
     }

}


int primeNumber(unsigned long digit){
    
    unsigned long i;

    for(i=2;i<=digit/2;i++){
	if(digit%i==0)
		return 0;
    }
    
    return 1;
}

unsigned short int  digits(unsigned long n){
      
      unsigned short int sum = 0;

     while(n/10!=0){
	  
          sum += n%10;
          n /= 10;
      }

      return sum+n;
}
       
