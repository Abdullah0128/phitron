/*Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
inputCopy
4
outputCopy
4 3 2 1
Note
Make sure don't print any leading or trailing spaces.

*/
#include<stdio.h>
void fun(int n){
    if(n==0)return;
    printf("%d ",n);
    fun(n-1);
    
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}