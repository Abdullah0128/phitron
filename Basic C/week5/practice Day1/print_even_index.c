/*Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

Note:

Assume array A is 0-based indexing.
Solve this problem using recursion.
Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print numbers in even indices in a reversed order separated by spaces.

Examples
inputCopy
4
1 4 2 7
outputCopy
2 1 
inputCopy
7
1 5 8 2 3 9 11
outputCopy
11 3 8 1 */

#include<stdio.h>
void fun(int arr[],int n,int i){
    for(int i=n-1;i>=0;i--){
       if(i%2==0){
            printf("%d ",arr[i]);
        }
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fun(arr,n,n);
    return 0;

    /*for(int i=n;i>=0;i--){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
    }*/
    return 0;
}