#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count[7]={0};
    for(int i=0;i<n;i++){
    int val=arr[i];
    count[val]++;//count[a[i]]++;
    }
    printf("1 - %d\n",count[1]);
    printf("2 - %d\n",count[2]);
    printf("3 - %d\n",count[2]);
    printf("4 - %d\n",count[3]);
    for(int i=0;i<=6;i++){
        printf("%d - %d\n",i,count[i]);
    }
    return 0;
}