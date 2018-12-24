#include<stdio.h>

int main(){
   
    unsigned int l,r,k,i;
    unsigned short int c = 0;

    scanf("%d%d%d",&l,&r,&k);

    for(i=l;i<=r;++i){
		if(i%k==0)
			++c;

    }

    printf("%d",c);

    return 0;
}
