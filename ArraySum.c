#include<stdio.h>

int main(){
    short n,i;
  
    scanf("%d",&n);
 
    unsigned long a[n],sum=0;

    for(i=0;i<n;++i)
		scanf("%ld",&a[i]);

     for(i=0;i<n;++i)
		sum += a[i];
     
     printf("%ld",sum);

}

