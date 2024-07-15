#include<stdio.h>
int main(){
    int n;
    printf("enter your 1st array size\n");
    scanf("%d",&n);
   int  arr1[n];
   printf("enter your 1st array element=");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int m;
    printf("enter your 2nd array size\n");
    scanf("%d",&m);
    int arr2[m];
    printf("enter your 2nd array element=");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int ans[n+m];
for(int i=0;i<n;i++){
    ans[i]=arr1[i];
}
int i=n;
for(int j=0;j<m;j++){
    ans[i]=arr2[j];
    i++;
}
for(int i=0;i<n+m;i++){
    printf("%d ",ans[i]);
}

}