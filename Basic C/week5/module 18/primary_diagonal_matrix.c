//je matrix e principal diagonal chara baki value gula zero
/*/*3 3
1 0 0
0 2 0
0 0 3*/

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
            if(i==j){
                continue;
            }
            if(arr[i][j]!=0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("primary diagonal");
    }
    else{
        printf("not diagonal");
    }

return 0;
}