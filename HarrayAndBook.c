#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    int i=0,sum=0,c;
 
    scanf("%s",s);
    
    int l = strlen(s);

    if(l==10){
       while(s[i]!='\0'){
            
            c = (int) s[i]-48;
            ++i;
            sum = sum + c*i;
       }
    

      if(sum%11==0)
	 printf("%d Legal ISBN",sum);
     else 
	printf("%d Ilegal ISBN",sum);
     }else
        printf("%d Ilegal ISBN",sum);

    return 0;
}
