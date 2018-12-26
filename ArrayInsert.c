#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned long n,i;
    unsigned int q;
    unsigned int *a,*k,*x,*y,t;
    unsigned long sum = 0;

    scanf("%ld%d",&n,&q);

    a = (int *) malloc(sizeof(int)*n);
    k = (int *) malloc(sizeof(int)*q);
    x = (int *) malloc(sizeof(int)*q);
    y = (int *) malloc(sizeof(int)*q);

    for(i=0;i<n;++i)
           scanf("%d",&a[i]);

    for(i=0;i<q;++i)
	   scanf("%d%d%d",&k[i],&x[i],&y[i]);

     for(i=0;i<q;++i){
            if(k[i]==1)
                  a[x[i]] = y[i];
            else if(k[i]==2){
                 for(t=x[i];t<=y[i];++t){
			sum = sum + a[t];
                 }
                 printf("%ld\n",sum);
             sum = 0;
           }
      }

      free(a);
      free(k);
      free(x);
      free(y);

      return 0;
}
