#include<stdio.h>
#include<string.h>

int main(){
    
    char s[105];
    
    scanf("%s",s);

    if(strstr(s,"000000") || strstr(s,"111111")){
         printf("Sorry sorry!");
    }else
        printf("Good luck!");

}
