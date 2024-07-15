/*Problem Statement

You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be 32 bit integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

Palindrome: A palindrome is a word that reads the same forward and backward.

Input Format

Input will contain the string S.
Constraints

1 <= |S| <= 1000; Here |S| means the length of the string.
Output Format

Output "Palindrome" or "Not Palindrome" without the quotation marks.
Sample Input 0

madam
Sample Output 0

Palindrome
Sample Input 1

abccba
Sample Output 1

Palindrome
Sample Input 2

x
Sample Output 2

Palindrome
Sample Input 3

abca
Sample Output 3

Not Palindrome*/
#include<stdio.h>
#include<string.h>
int is_palindrome(char ch[],int len){
int flag=1;

for(int i=0;i<len;i++){
        if(ch[i]!=ch[len-1]){
            flag=0;
        }
        
        len--;
    }
    if(flag){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    char ch[1001];
    scanf("%s",ch);
    int len=strlen(ch);
    int result=is_palindrome(ch,len);
    
    if(result==1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;

}