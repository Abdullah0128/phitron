#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter any two number: ");
    scanf("%d %d",&n1,&n2);
    if(n1==n2){
        printf("equal");
    }
    else{
        printf("not equal");
    }
    return 0;
}