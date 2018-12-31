#include<stdio.h>

int main(){
     long n,i,max,min;

     scanf("%ld",&n);

     long a[n];

     for(i=0;i<n;++i)
	    scanf("%ld",&a[i]);

     min  = a[0];
     max  = a[0];

     for(i=1;i<n;++i){
          if(min > a[i])
                min = a[i];

          if(max < a[i])
                max = a[i];

     }

     printf("%ld",max+min);

}
