/*3 3
1 0 0
0 1 0
0 0 1*/

#include<stdio.h>
int main(){
int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=1;
    if(row!=col){
        flag=0;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==arr[0][0]){
                continue;
            }
            if(arr[i][j]!=0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("scalar matrix");
    }
    else{
        printf("not scalar matrix");
    }

return 0;
}