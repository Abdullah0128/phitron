#include<Stdio.h>
#include<string.h>
int main(){
    char ch[1000001];
    scanf("%s",&ch);
    int count[26]={0};
    for(int i=0;i<strlen(ch);i++){
        int value=ch[i]-'a';
        count[value]++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
        printf("%c : %d\n",i+'a',count[i]);
    }
    }
    return 0;
    
}