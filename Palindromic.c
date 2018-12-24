#include<stdio.h>
#include<string.h>

int main(){
    
    char s[105];
    int i = 0;
    int l;

    scanf("%s",s);

    l = strlen(s);

    while(i<l/2){
         if(s[i] != s[l-(i+1)]){
                 printf("NO");
                 return 0;
         }

	++i;
    }

    printf("YES");

    return 0;

}
