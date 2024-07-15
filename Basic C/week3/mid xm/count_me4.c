/*Problem Statement

You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to prin that.

Input Format

Input will contain only S.
Constraints

1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Ouput in the format show in the sample output.
Sample Input 0

thefoxisbrave
Sample Output 0

a - 1
b - 1
e - 2
f - 1
h - 1
i - 1
o - 1
r - 1
s - 1
t - 1
v - 1
x - 1
Sample Input 1*/
#include<Stdio.h>
#include<string.h>
int main(){
    char ch[10000];
    scanf("%s",ch);
    int count[26]={0};
    for(int i=0;i<strlen(ch);i++){
        int value=ch[i]-'a';
        count[value]++;

    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            printf("%c - %d\n",i+'a',count[i]);
        }
    }
    return 0;
}