#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",&a,&b);

    /*for(int i=0;i<=strlen(b);i++){
        a[i]=b[i];
    }
    printf("%s %s",a,b);*/
    // or or or or or or
    strcpy(a,b);
    printf("%s %s");
    return 0;

}