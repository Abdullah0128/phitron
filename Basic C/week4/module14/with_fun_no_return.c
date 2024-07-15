#include<stdio.h>
int sum(void)//void means zero--no return value
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main(){
    int s=sum();
    return 0;

}