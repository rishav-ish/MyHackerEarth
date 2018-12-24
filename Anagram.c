#include<stdio.h>
#include<string.h>

//#define MAX 1000

int count(char **,char **);


int main(){
    char a[1000][10005],b[1000][10005];
    int i,t;

    scanf("%d",&t);

    for(i=0;i<t;++i)	
	scanf("%s%s",&a[i],&b[i]);

    for(i=0;i<t;++i)
	printf("%d\n",count(a[i],b[i]));

    return 0;

}

int count(char **a, char **b){
    int i,j,count=0;

    int l1 = strlen(*a);
    int l2 = strlen(*b);

    for(i=0;i<l1;++i){
             for(j=0;j<l2;++j){
                   if(a[i]==b[j] && a[i] != ' ' && b[j] != ' ' ){
                         a[i]= ' ';
                         b[j]= ' ';
                         break;
                   }
             }
    }

    for(i=0;i<l1;++i){
                if(a[i]!=' ')
			++count;
    }

    for(j=0;j<l2;++j){
                  if(b[j]!=' ')
			++count;
    }
    return count;
}

