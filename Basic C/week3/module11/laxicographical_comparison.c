#include<stdio.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int i=0;
           while(1){ //  infinity loop   //  for(int i=0; ;i++){
        if(a[i]=='\0'&& b[i]=='\0'){
            printf("both are same\n");
            break;
        }
        else if(a[i]=='\0'){
            printf("A choto\n");
            break;
        }
        else if(b[i]=='\0'){
            printf("B choto\n");
            break;
        }
         if(a[i]==b[i]){
            i++;
        }
        else if("a[i]<b[i]"){
            printf("A choto");
            break;
        }
        else{
            printf("B choto");
        }
    }
    return 0;
}

