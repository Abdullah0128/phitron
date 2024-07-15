#include<stdio.h>
int main(){
    int X,result;
    scanf("%d",&X);
    result=X/1000;
    if(result%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
}