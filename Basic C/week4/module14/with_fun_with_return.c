#include<stdio.h>
int sum(int x,int y){
    int sum=x+y;
    return sum;
}
int main(){
    int s1=sum(100,140);
    int s2=sum(10,20);
    printf("%d\n",s1);
    printf("%d",s2);
    return 0;
}