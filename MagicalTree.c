#include<stdio.h>

int main(){
   
    unsigned long t,i,j;
    long sum,temp;
    char s[100005];


    scanf("%ld",&t);

    scanf("%s",s);

        j = 1;
        temp = s[0]-48;

        while(s[j+1]!='\0'){
            
             if(s[j]=='+')
			temp = temp + (s[j+1]-48);
             else if(s[j]=='-')
			temp = temp - (s[j+1]-48);
		
             ++j;
        }

        

   for(i=1;i<t;++i){
       
        scanf("%s",s);

        j = 1;
        sum = s[0]-48;

        while(s[j+1]!='\0'){
            
             if(s[j]=='+')
			sum = sum + (s[j+1]-48);
             else if(s[j]=='-')
			sum = sum - (s[j+1]-48);
		
             ++j;
        }

        if(temp < sum)
		temp = sum;
    }

    printf("%ld",temp);

}

