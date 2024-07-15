/*Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
inputCopy
5
outputCopy
1
2
3
4
5
*/
#include<stdio.h>
void fun(int n,int i){
    if(i>n)return;
    printf("%d\n",i);
    fun(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n,1);
    return 0;
}