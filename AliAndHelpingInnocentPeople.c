#include<stdio.h>

int main(){
   
    char s[15];

    scanf("%s",&s);

    if(s[2] == 'A' || s[2] == 'E' || s[2] == 'I' || s[2] == 'O' || s[2] == 'U' || s[2] == 'Y')
		printf("invalid");
    else if((s[0] + s[1])%2!=0 || (s[3]+s[4])%2!=0 || (s[4] + s[5])%2!=0 || (s[7]+s[8])%2!=0)
		printf("invalid");
     else
	  printf("valid");

     return 0;
}
