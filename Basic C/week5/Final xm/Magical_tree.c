/*Problem Statement

Jingle Bells, Jingle Bells - It's Christmas today! Ranja, our little friend, is all excited, but there's just one thing missing: a Christmas tree.

Ranja will provide us with the size of the tree, N, and we'll work our holiday magic to print out that perfect tree. Let's make Ranja's Christmas tree dreams come true!

You should see the sample input output to understand how the tree looks like.

Input Format

Input will contain only N.
Constraints

1 <= N <= 21 ; and N is odd.
Output Format

Output the tree of size N.
Sample Input 0

1
Sample Output 0

     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *
Sample Input 1

3
Sample Output 1

      *
     ***
    *****
   *******
  *********
 ***********
*************
     ***
     ***
     ***
     ***
     ***
Sample Input 2

5
Sample Output 2

       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
     *****
     *****
     *****
     *****
     ******/

#include<stdio.h>
int main(){
    int n,s,k,line=0;
    scanf("%d",&n);
 switch(n){
    case 1:
   line=6;
   break;
   case 3:
   line=7;
   break;
   case 5:
   line=8;
   break;
   case 7:
   line=9;
   break;
   case 9:
   line=10;
   break;
   case 11:
   line=11;
   break;
   case 13:
   line=12;
   break;
   case 15:
   line=13;
   break;
   case 17:
   line=14;
   break;
   case 19:
   line=15;
   break;
   case 21:
   line=16;
   break;
 }
    s=line-1,k=1;
    for(int i=1;i<=line;i++){
      for( int j=1;j<=s;j++){
        printf(" ");
      }
      for(int j=1;j<=k;j++){
        printf("*");
      }
      
        s--;
        k=k+2;
      printf("\n");
    }
    for(int i=1;i<=5;i++){
       printf("     ");
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}