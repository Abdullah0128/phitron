/*Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.

Examples
inputCopy
4
7 2 1 3
outputCopy
13
inputCopy
3
-1 2 -3
outputCopy
2*/
#include<stdio.h>
int main(){
    long long int n,Sum=0;
    scanf("%lld",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      // printf("arr[%d]=",i);
       scanf("%lld",&arr[i]);
    //}
   // for(int i=0;i<n;i++){
    //printf("%d\n",arr[i]);
    Sum=Sum+arr[i];
    }
    if(Sum<0){
    printf("%lld\n",(Sum*(-1)));
    }
    else{
        printf("%lld\n",Sum);
    }
    return 0;
}