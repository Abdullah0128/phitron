#include<stdio.h>
/*void swap(int p,int q){
    int temp=p;
    p=q;
    q=temp;
}*/
int main(){
    int arr[4]={1,2,3,4};
    int *p;
    p=arr+3;
    *p=5;
    printf("%d\n",arr[3]);

}