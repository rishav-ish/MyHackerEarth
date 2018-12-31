#include<stdio.h>

int main(){
    unsigned short t,i;

    scanf("%d",&t);

    unsigned short c0[t],c1[t],c2[t],c3[t];

    for(i=0;i<t;++i)
                scanf("%d%d%d%d",&c0[i],&c1[i],&c2[i],&c3[i]);

    for(i=0;i<t;++i){
                if(c0[i] == 0 && c1[i] == 1 && c2[i] == 1 && c3[i] == 0){        //xor operator
			printf("Yes\n");
                }else if(c0[i]== 0 && c1[i] == 1 && c2[i] == 1 && c3[i] == 1){   //or operator
                        printf("
     }


}
