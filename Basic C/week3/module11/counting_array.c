#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int zero=0,one=0,two=0,three=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;        
    }
    if(arr[i]==1){
        one++;
    }
    if(arr[i]==2){
        two++;
    }
    if(arr[i]==3){
        three++;
    }
    }
    printf("0...%d\n",zero);
    printf("1...%d\n",one);
    printf("2...%d\n",two);
    printf("3...%d\n",three);
    return 0;
}