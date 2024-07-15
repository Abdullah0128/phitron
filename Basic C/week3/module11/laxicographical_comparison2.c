#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int v=strcmp(a,b);
    printf("%d\n",v);//v=0,1,-1........1=b choto,0=same,-1=a choto
    if(v<0){
        printf("A choto\n");
    }
    else if(v==0){
        printf("same\n");
    }
    else{
        printf("B choto\n");
    }
}