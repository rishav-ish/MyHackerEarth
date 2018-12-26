#include<stdio.h>

int main(){
    
    char s[105];
    unsigned int i = 0,sum = 0;

    scanf("%s",s);

    while(s[i]!='\0'){
         sum = s[i]%96 + sum;
         ++i;
    }

    printf("%d",sum);

    return 0;
}
