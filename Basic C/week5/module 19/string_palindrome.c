#include<stdio.h>
#include<string.h>
int main(){
    char A[100],B[100];
    scanf("%s",&A);
    strcpy(B,A);
    printf("%s\n",B);
    int i=0,j=strlen(B)-1;
    while(i<j){
        char temp=B[i];
        B[i]=B[j];
        B[j]=temp;
        i++;
        j--;
    }
    if(strcmp(A,B)==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}