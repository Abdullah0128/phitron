#include<stdio.h>
int main(){
int n, a, b;
scanf("%d",&n);
a = n % 10;
b = (n/10)%10;
if((a%b==0)||(b%a==0)){
    printf("yes");
}
else{
    printf("no");
}
}