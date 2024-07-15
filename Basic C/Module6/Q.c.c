#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
    int n,r;
    scanf("%d",&n);
    while(n!=0){
    r=n%10;
   printf("%d ",r);
   n=n/10;
}

}
return 0;
}