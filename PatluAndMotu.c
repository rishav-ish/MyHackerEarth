#include<stdio.h>

int main(){

    int n;
    short flag = 0;
    int i = 1;

    scanf("%d",&n);

    while(n>0){
       n -= i;
       if(n<=0){
	   flag = 0;
	   break;
       }
       
       n -= 2*i;
       if(n <= 0){
		flag = 1;
		break;
       }

       ++i;

       
    }

    if(flag==0)
	printf("Patlu");
    else
	printf("Motu");

    return 0;
}
