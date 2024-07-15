/*Problem Statement

You will be given a positive integer N, you need to print a pattern shown below using this N.

For example: If N=5, the pattern will look like below.

image

See the sample test cases for more clarification.

Input Format

Input will contain only N.
Constraints

1 <= N <= 9
Output Format

Output the pattern.
Sample Input 0

1
Sample Output 0

1
Sample Input 1

4
Sample Output 1

   1
  21
 321
4321
Sample Input 2

5
Sample Output 2

    1
   21
  321
 4321
54321
Submissions: 327
Max Score: 20
Difficulty: Easy
Rate This Challenge:

    
More
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=k;j>=1;j--){
            printf("%d",j);
        }
        s--;
        k++;
        printf("\n");
    }
    
}