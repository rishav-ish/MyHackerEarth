#include<stdio.h>

unsigned int factorial(unsigned short n){
    if(n==1 || n==0)
            return 1;

    else 
	return n*factorial(n-1);
}

int main(){
    short int n;

    scanf("%d",&n);

    printf("%d",factorial(n));

    return 0;

}


