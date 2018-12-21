#include<stdio.h>
#include<stdlib.h>

void divide(unsigned long *,unsigned long,unsigned int);

void main(){
   unsigned long N;
   unsigned long *A;
   unsigned long q;
   unsigned int *Q;
   unsigned long i = 0;

   scanf("%ld",&N);

   A = (unsigned long *)malloc(sizeof(long)*N);

   for(;i<N;i++)	
	scanf("%ld",&A[i]);

   scanf("%ld",&q);

    Q = (unsigned int *) malloc(sizeof(int)*q);

    for(i=0;i<q;i++)
    	scanf("%d",&Q[i]);

    for(i=0;i<q;i++)
	 divide(A,N,Q[i]);

    for(i=0;i<N;i++)
          printf("%ld ",A[i]);


}

void divide(unsigned long a[],unsigned long l,unsigned int d){
    unsigned long  i = 0;

    for(i=0;i<l;i++)
          a[i] = a[i]/d;

    

}

