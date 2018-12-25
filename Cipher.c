#include<stdio.h>

#define MAX 1000005

int main(){
     char s[MAX];

     unsigned int k,i=0;

     scanf("%s%d",s,&k);
     

     while(s[i]!='\0'){
         if(s[i]>=65 && s[i] <= 90){

                 s[i] = (s[i]+k%26)%91;

                 if(s[i]<65)
			s[i] += 65;
         }else if(s[i]>=97 && s[i] <= 122){
                  

                  s[i] = (s[i]+k%26)%123;

                  if(s[i]<97)
			           s[i] += 97;
         }else if(s[i] >= 48 && s[i] <= 57){

                   s[i] = (s[i]+k%10)%58;

                   if(s[i]<48)
			            s[i]+= 48;
        }

         ++i;
    }

    printf("%s",s);

    return 0;
}
