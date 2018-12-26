#include<stdio.h>
#include<stdlib.h>

typedef struct _num{
   short int digit;
   struct _num *a;
}num;

int main(){
   num n = NULL;
   short t;

   while(1){
       scanf("%d",&t);

       if(t==42)
             break;

       append(&n,t);
   }

   result();
}

void append(struct *,int){
      if(
