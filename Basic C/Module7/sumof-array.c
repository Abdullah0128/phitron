#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf(" the sum of array=%d",sum);
}