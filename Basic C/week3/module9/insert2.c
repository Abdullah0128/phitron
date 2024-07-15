#include<stdio.h>
int main(){
    int n;
    printf("enter your array size: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter your aarya element=");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos,value;
    printf("enter your position and value= "); 
    scanf("%d %d",&pos,&value);
    for(int i=n;i>=pos+1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}