#include<stdio.h>
int main(){
    char ch[7]="Madina\0";//ch[6]={'m','a','d','i','n','a'};size=7
    char ch[]="Madina\0";//size=8
   printf("%s\n",ch);
   printf("%d",sizeof(ch));
    
    return 0;
}