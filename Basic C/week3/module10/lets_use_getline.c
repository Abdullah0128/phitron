/*Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

Hint: use function getline(cin, s).

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S will contain '\' symbol.

Output
Print the answer required above.

Examples
inputCopy
Egyptian collegiate programming\ contest
outputCopy
Egyptian collegiate programming
inputCopy
google \or facebook
outputCopy
google 
*/
#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000001];
   fgets(ch,1000001,stdin);
   
    for(int i=0;ch[i]!='\\';i++){
       
         printf("%c",ch[i]);
    }
   
    return 0;
}