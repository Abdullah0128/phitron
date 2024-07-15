#include<stdio.h>
int main(){
    char X;
    scanf("%c",&X);
if(X>='A'&& X<='Z'){
    printf("%c",X+32);
}
else if(X>='a'&&X<='z'){
    printf("%c",X-32);
}
else{
    printf("default");
}
}