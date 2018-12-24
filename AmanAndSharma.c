#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned int d,t=0,i;
    
    float *r,*x,di;

    const float pi =(float) 22/7;

    scanf("%d",&d);

    r = (float *) malloc(sizeof(float)*d);
    x = (float *) malloc(sizeof(float)*d);

    for(i=0;i<d;++i)
	      scanf("%f%f",&r[i],&x[i]);
    
    for(i=0;i<d;++i){
          di =  (x[i]*100) / (2*pi*r[i]);

          if(di >= 1)
		         ++t;
     }

     printf("%d",t);

     free(r);
     free(x);

     return 0;
}
