#include<stdio.h>
int main(){
    int tk;
    printf("enter your amount= ");
    scanf("%d",&tk);
    if(tk>=100){
        printf("burger khabo");
    }
    else if(tk>=50){
        printf("chips kahbo");

    }
    else{
        printf("khabo na");
    }
    return 0;
}