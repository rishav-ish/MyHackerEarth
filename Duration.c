#include<stdio.h>
#include<stdlib.h>

int main(){
   
    int n,i,start,end;
    int *sh,*sm,*eh,*em;

    scanf("%d",&n);

    sh = (int *) malloc(sizeof(int)*n);
    sm = (int *) malloc(sizeof(int)*n);
    eh = (int *) malloc(sizeof(int)*n);
    em = (int *) malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
	scanf("%d%d%d%d",&sh[i],&sm[i],&eh[i],&em[i]);

    for(i=0;i<n;i++){
         start = sh[i]*60 + sm[i];
         end = eh[i]*60 + em[i];

         printf("%d %d\n",(end-start)/60,(end-start)%60);
    }

    free(sh);
    free(sm);
    free(eh);
    free(em);

    return 0;
}

