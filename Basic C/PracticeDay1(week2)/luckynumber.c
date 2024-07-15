#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int second=n%10;
    int first=n/10;
    
    if(second%first==0||first%second==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}