/*Given two strings S and T. Print 2 lines that contain the following in the same order:

Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.
For more clarification see the example below.

Input
The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

Output
Print the answer required above.

Examples
inputCopy
LEVEL
ONE
outputCopy
5 3
LEVEL ONE
inputCopy
Programming
contest
outputCopy
11 7
Programming contest*/
#include<stdio.h>
#include<string.h>
int main(){
    char ch1[1001],ch2[1001];
   // printf("enter your first string= \n");
    scanf("%s",&ch1);
   // printf("enter your second string= \n");
    scanf("%s",&ch2);
    int str1=strlen(ch1);
    int str2=strlen(ch2);
    printf("%d %d\n",str1,str2);
    printf("%s %s",ch1,ch2);

return 0;

}