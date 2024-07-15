#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    gets(ch); //scanf("%s",&ch); er bodle gets(a) kaj korbe jodi space input nite chai
    printf("%s",ch);
    /*char ch[200];
    fgets(ch,12,stdin);
    printf("%s",ch);
    */
    return 0;
}