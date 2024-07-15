/*You are given an array a
 of n
 integers, and an integer k
You can choose at most k
 elements and get their summation.

What is the maximum summation you can get?

Input
The first line contains two integers n
 and k(1≤k≤n≤103)
 the number of elements in the array a
 and the maximum elements you can choose respectively.

The second line contains n
 integers ai(−109≤ai≤109)
 the elements of the array a
.

Output
Output the maximum summation you can get.

Examples
inputCopy
2 2
1 2
outputCopy
3
inputCopy
2 1
1 2
outputCopy
2
inputCopy
3 3
1 2 3
outputCopy
6
*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp,i=0,k=n-1;
   while(i<k){
                temp=arr[k];
                arr[k]=arr[i];
                arr[i]=temp;
                i++;
                k--;
            }
        
   
    int p,sum=0;
    scanf("%d",&p);
    for(int i=0;i<p;i++){      
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}