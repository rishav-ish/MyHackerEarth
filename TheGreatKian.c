#include<stdio.h>
#include<stdlib.h>


int main(){
    
    int n,i=0,j;
    unsigned long *a,sum1=0,sum2=0,sum3=0;
    
    scanf("%d",&n);

    a = (unsigned long *) malloc(sizeof(long)*n);

    for(;i<n;++i)
	 scanf("%d",&a[i]);

    for(i=0;i<n;i+=3)
           sum1 = sum1 + a[i];

    for(i=1;i<n;i+=3)
	   sum2 = sum2 + a[i];

    for(i=2;i<n;i+=3)
	    sum3 = sum3 + a[i];
    
    printf("%ld %ld %ld",sum1,sum2,sum3);

    free(a);
}
