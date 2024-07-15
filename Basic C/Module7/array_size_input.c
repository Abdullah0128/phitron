#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];//variable size array
    for(int i=0;i<n;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}