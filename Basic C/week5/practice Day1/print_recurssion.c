/*Given a number $$$N$$$. Print "I love Recursion" $$$N$$$ times.

Note: Solve this problem using recursion.

Input
Only one line containing a number $$$N$$$ $$$( 1 \le N \le 100 )$$$ .

Output
Print "I love Recursion" $$$N$$$ times.

Example
inputCopy
3
outputCopy
I love Recursion
I love Recursion
I love Recursion*/
#include<stdio.h>
void fun(int n,int i){
    if(i>n)return;
    printf("I love Recursion\n");
    fun(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
   fun(n,1);
    return 0;

}