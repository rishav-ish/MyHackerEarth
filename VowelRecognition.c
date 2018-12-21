/*
  vowel recoginition
*/

#include<stdio.h>
#include<string.h>

#define MAX 100000

unsigned int sum = 0;
int ii=0;

void doSum(char [],int,int);
void genString(char[]);

void main(){
 
   char s[10][MAX];
   int t,i;

   scanf("%d",&t);

   for(i=0;i<t;i++)
	scanf("%s",s[i]);

   for(i=0;i<t;i++){
	genString(s[i]);
        printf("%d\n",sum);
        sum = 0;ii=0;
   }
}

void genString(char s[])
{
      int l = strlen(s);
      int i = 1;	

      while(i<=l){
 	 doSum(s,ii,i);
         i++;
         
      }   	  

      if(*s=='\0')
	  return;
      else{
         genString(++s);ii++;
      }
      
}

void doSum(char s[],int index,int length){
    
     int i = index;
     
     while(i<length){
	 if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u')
			sum++;
 
         else if(s[i]=='A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			sum++;
         i++;

     }
}
     
