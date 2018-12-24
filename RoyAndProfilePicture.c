#include<stdio.h>
#define MAX 10005

int main(){
    unsigned int l,n,i;
    unsigned int w[MAX],h[MAX];

    scanf("%d%d",&l,&n);

    for(i=0;i<n;++i)
	scanf("%d%d",&w[i],&h[i]);

    for(i=0;i<n;++i){
        if(w[i] < l || h[i] < l)
           	 printf("UPLOAD ANOTHER\n");
        else if(w[i]>=l && h[i]>=l){
             if(w[i]==h[i])
	          printf("ACCEPTED\n");
    	     else 
	          printf("CROP IT\n");

      }
    }

    return 0;

}
