#include<stdio.h>
#include<stdlib.h>

int main(){

     unsigned int n,q,i,t,j;
     unsigned long *a,sum=0;
     unsigned int *l,*r;

     scanf("%d%d",&n,&q);

     a = (unsigned long *) malloc(sizeof(long)*n);
     l = (unsigned int *) malloc(sizeof(int)*q);
     r = (unsigned int *) malloc(sizeof(int)*q); 

 
     fread(a,sizeof(long),n,stdin);

     /*for(i=0;i<q;++i)
	      scanf("%d%d",&l[i],&r[i]);*/

     fread(l,sizeof(int),q,stdin);
     fread(r,sizeof(int),q,stdin);

     for(i=0;i<q;++i){
              t = r[i]-l[i]+1;

              for(j=l[i]-1;j<r[i];j++){
                     sum =  a[j] + sum;
               }

               
 
               printf("%ld\n",sum/t);
               sum = 0;
          
     }

    free(a);
    free(l);
    free(r);

    return 0;
}
