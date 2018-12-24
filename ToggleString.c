#include<stdio.h>
#include<string.h>


int main(){
   char s[105];
   int i=0;

   scanf("%s",s);

   while(s[i]!='\0'){
        if(s[i] >= 'a')
		s[i] = s[i] -  ' ';
        else
              s[i] = s[i] + ' ';
	
        ++i;
   }

   printf("%s",s);

   return 0;
}
