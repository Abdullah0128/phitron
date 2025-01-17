/*8Problem Statement

You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.

Input Format

First line will contain N.
Next line will contain the array A.
Constraints

1 <= N <= 1000
0 <= A[i] <= 10^9; Where 0 <= i < N
Output Format

First print the number of even elements, then the number of odd elements separated by a space.
Sample Input 0

5
1 2 3 4 5
Sample Output 0

2 3
Sample Input 1

6
0 4 0 6 5 3
Sample Output 1

4 2*/
#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count1++;
        }
        if(arr[i]%2==0){
            count2++;
        }
    }
    printf("%d %d",count2,count1);
}
int main(){
    odd_even();
    return 0;
}