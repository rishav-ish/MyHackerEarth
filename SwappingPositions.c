#include<stdio.h>
#include<stdlib.h>


int main(){
   
    char *s1, *s2;

    short int t,n;

    scanf("%d",&t);

    scanf("%d",&n);

    s1 = (char *) malloc(sizeof(char)*n);
    s2 = (char *) malloc(sizeof(char)*n);

    scanf("%s%s",s1,s2);


    return 0;

}
