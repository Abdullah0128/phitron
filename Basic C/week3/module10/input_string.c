//স্ট্রিং ইনপুট নিতে স্প্যাস দেওয়া যায় না(f g h i m ei rkn hole vul**fahim ei vabe)

#include<stdio.h>
int main(){
    char ch[5];
    for(int i=0;i<5;i++){
     scanf("%c",&ch[i]);
    }
    for(int i=0;i<5;i++){
        printf("%c\n",ch[i]);
    }
    return 0;
}