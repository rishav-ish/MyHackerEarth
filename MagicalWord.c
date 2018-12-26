#include<stdio.h>

int main(){
    
    unsigned short t,i,j;

    scanf("%d",&t);

    unsigned int n[t];
    char s[t][500];

    for(i=0;i<t;i++)
	scanf("%d%s",&n[i],&s[i]);

    for(i=0;i<t;i++){
       j = 0;
 
       while(j<n[i]){
            if(s[j]>=65 && s[j] <= 70)
                    s[j] = 'C';
            else if(s[j] >= 71 && s[j] <= 76)
		    s[j] = 'I';
            else if(s[j]  >= 77 && s[j] <= 81)
		    s[j] = 'O';
            else if(s[i][j] >= 82  && s[i][j] <= 85)
		    s[j] = 'S';
            else
                   s[j] = 'W';

            ++j;
        }
      }

      for(i=0;i<t;i++)
		scanf("%s\n",s[i]);

      return 0;
       
}
