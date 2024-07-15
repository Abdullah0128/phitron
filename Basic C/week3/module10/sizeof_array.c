#include<stdio.h>
int main(){
    char ch[5];
    printf("the size of array=%d\n",sizeof(ch));
    //sizeof memery space
    printf(" the size of memory space of integer=%d\n",sizeof(int));
    printf("the size of memory space of long long integer=%d\n",sizeof(long long int));
    printf(" the size of memory space of character=%d\n",sizeof(char));
    return 0;
}