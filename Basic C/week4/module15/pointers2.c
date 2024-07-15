#include<stdio.h>
int  main(){
    int x=100;
    int *ptr=&x;
    x=200;
    *ptr=200;
    printf("x er value -%d\n",x);
    printf("ptr er value-%d\n",*ptr);//dereference
    
    return 0;
}