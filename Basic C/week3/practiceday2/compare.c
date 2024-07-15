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

int main(){
    char ch1[21],ch2[21];
    //int str1=strlen(ch1);
    //int str2=strlen(ch2);
    scanf("%s %s",&ch1,&ch2);   
     
    int i=0;
    while(1){
        if(ch1[i]=='\0' && ch2[i]=='\0'){
           printf("%s\n",ch1);
          //printf("ch1 choto");
            break;
        }
        else if(ch1[i]=='\0'){
            printf("%s\n",ch1);
            //printf("ch1 choto");
            break;
        }
        else if(ch2[i]=='\0'){
            printf("%s",ch2);
            //printf("ch2 choto");
            break;
        }
        if(ch1[i]==ch2[i]){
            i++;
        }
        else if(ch1[i]<ch2[i]){
            printf("%s\n",ch1);
            //printf("ch1 choto");
            break;
        }
        else{
            printf("%s",ch2);
            //printf("ch2 choto");
           
        }
    }
    return 0;
}