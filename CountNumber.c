#include<stdio.h>

int getMeIndex(int , char []);

int main(){
    char s[10005];
    unsigned int t,k,i,j,count=0;

    scanf("%d",&t);

    for(i=0;i<t;++i){
         
	 scanf("%d%s",&k,s);
         j = 0;

         while(j<k){
              if(s[j] >= '0' && s[j] <= '9'){
                   ++j;
                   ++count;

                   j = getMeIndex(j,s);
              }else
		  ++j;
              
               
         }


         printf("%d\n",count);
         count = 0;

      }


}

int getMeIndex(int i, char s[]){
      int j = i;

      while(s[j]>='0' && s[j] <= '9'){
               ++j;
      }

      return j;
}
