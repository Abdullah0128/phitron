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
    /*for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }*/
    int e;//koto number row er value dekhbo seta
    scanf("%d",&e);
    for(int i=0;i<col;i++){//col er value bar bar chage hocche tai col e loop cholbe
        printf("%d ",arr[e][i]);
    }
}
