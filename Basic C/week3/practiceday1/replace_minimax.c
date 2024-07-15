#include<stdio.h>
#include<limits.h>
int main(){
    int n,pos1,pos2;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
   int max=INT_MIN,min=INT_MAX;
   for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
         pos1=i;
    }
   } 
   for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
         pos2=i;
    }
   } 
   printf("\n");
   printf(" minimu&position=%d %d\n",min,pos1);
    printf("maximum&position=%d %d\n",max,pos2);
    // printf("%d\n",pos1);
      //printf("%d\n",pos2);
int temp;
for(int i=0;i<n;i++){
    temp=arr[pos1];
    arr[pos1]=arr[pos2];
    arr[pos2]=temp;
}
   

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
  

    
    
}