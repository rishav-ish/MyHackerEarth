#include<stdio.h>

int main(){
   unsigned short t,i;
   
   scanf("%d",&t);

    unsigned short n[t];
    unsigned int  m[t];

    for(i=0;i<t;++i)
	  scanf("%d%d",&n[i],&m[i]);

   
    for(i=0;i<t;++i){
           if(m[i]%n[i]==0)
                 printf("Yes\n");
           else
                 printf("No\n");
    }

}
