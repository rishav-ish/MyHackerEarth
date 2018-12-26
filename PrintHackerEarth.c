#include<stdio.h>

int main(){
    unsigned int n;
    unsigned int min,i=0,min2,a[7]={0};

    scanf("%d",&n);

    char s[n];

    scanf("%s",s);


    if(n<11){
         printf("0");
         return 0;
    }

    while(s[i]!='\0'){
              switch(s[i]){
                   case 'h' : ++a[0]; break;
                   case 'a' : ++a[1]; break;
                   case 'e' : ++a[2]; break;
                   case 'r' : ++a[3]; break;
                   case 'c' : ++a[4]; break;
                   case 'k' : ++a[5]; break;
                   case 't' : ++a[6]; break;
               }
               ++i;
     }

      if(a[0]>=2 && a[1] >=2 && a[2] >0 && a[3] > 0 && a[4] > 0 && a[5] > 0 && a[6] > 0){
           min = a[0];


           for(i=1;i<=3;++i){
                  if(min > a[i])
			min = a[i];
           }

           min2 = a[4];

           for(i=5;i<=6;++i){
                   if(min2>a[i])
			min2 = a[i];
           }

           if(min2 >= min/2)
                printf("%d",min/2);
           else
                printf("%d",min2);
       }else
            printf("0");


 }

