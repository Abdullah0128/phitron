#include<stdio.h>
void fun(int x){
    printf("fun x er addreess-%p\n",&x);
    x=200;

}
int  main(){
    int x=10;
    printf("main x er addreess-%p\n",&x);
    fun(x);
    printf("main x er addreess-%d\n",x);
   
    
    return 0;
}