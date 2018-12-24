#include<stdio.h>


int main(){
   int x = 0,y = 0;
   unsigned int i = 0;

   char s[205];

   scanf("%s",s);

   while(s[i]!='\0'){
            
            switch(s[i]){
                  case 'L':
			--x;
                        break;

                   case 'R':
			 x++;
                         break;

                   case 'U':
			 y++;
                         break;
                 
                   case 'D':
			 y--;
                         break;
              }
             ++i;
        }

        printf("%d %d",x,y);

        return 0;
}
