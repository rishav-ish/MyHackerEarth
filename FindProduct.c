#include<stdio.h>
#include<stdlib.h>


int main(){
     unsigned int *a;
     unsigned int n,i;
     const unsigned long mod = 1000000007;

     unsigned long as  = 1;

     scanf("%d",&n);

     a = (unsigned int*) malloc(sizeof(int)*n);

     for(i=0;i<n;i++)
		scanf("%d",&a[i]);

      

     for(i=0;i<n;i++){
		as = (as * a[i]) % mod;
    }

      printf("%ld",as);

      free(a);

      return 0;
}	
      
