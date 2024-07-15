/*Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

Output
Print the smallest lexicographical string.

Note: If both of X and Y are equal, print any of them.

Example
inputCopy
acm
acpc
outputCopy
acm*/
#include<stdio.h>
#include<string.h>
int main(){
    char ch1[21],ch2[21];
    scanf("%s %s",&ch1,&ch2);
    int value=strcmp(ch1,ch2);
    if(value<0){
        printf("%s",ch1);
    }
    else if(value==0){
        printf("%s",ch1);
    }
    else{
        printf("%s",ch2);
    }

    
    
    return 0;
}