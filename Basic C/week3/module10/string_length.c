#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];   
    scanf("%s",&ch);
    printf("%s\n",ch);
    int str=strlen(ch);
    printf("%d\n",str);
    return 0;
}
/*
#include<stdio.h>
int main(){
    char ch[100];
    int count=0;
    scanf("%s",&ch);
    printf("%s\n",ch);
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    printf("%d\n",count);
}
*/
/*   while loop
#include<stdio.h>
int main(){
    char ch[100];
    int count=0;
    scanf("%s",&ch);
    printf("%s\n",ch);
    int i=0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    printf("%d\n",count);
}


*/