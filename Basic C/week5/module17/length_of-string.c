#include<stdio.h>
int fun(char ch[],int i){
    if(ch[i]=='\0') return 0;
    int length=fun(ch,i+1);
    return length+1;
}
int main(){
    char ch[6]="hello";
    int length=fun(ch,0);
    printf("%d",length);
    return 0;
}