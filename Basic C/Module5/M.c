#include<stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    if(X>=0 && X<=9){
        printf("IS DIGIT");
    }
    else{
        printf("AlPHA\n");
        if(X>='A' && X<='Z'){
            printf("IS CAPITAL");
        }
        else if(X>='a' && X<='z'){
            printf("IS SMALL");
        }
        else{
            printf("derfault");
        }
    }
    return 0;
}