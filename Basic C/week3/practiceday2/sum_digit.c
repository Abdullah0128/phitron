/*Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

Input
First line contains a number N (1  ≤  N  ≤  106) number of digits.

Second line contains N digits (0 ≤ Ai ≤ 9).

Output
Print the summation of these digits.

Example
inputCopy
5
13305
outputCopy
12
Note
First Example :

1 + 3 + 3 + 0 + 5 = 12 .*/



#include<stdio.h>
int main(){
     int n;
    scanf("%d",&n);
    char ch[n];   
  scanf("%s",&ch);
 // int str=strlen(ch);
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(ch[i]-48);
    }
    printf("%d",sum);
    return 0;

}
