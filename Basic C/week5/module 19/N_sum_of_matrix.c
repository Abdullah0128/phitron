#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int A[row][col],B[row][col],C[row][col];

    //input for A
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&A[i][j]);
        }
    }
    //input for B
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&B[i][j]);
        }
    }
    //input for C
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           C[i][j]=A[i][j]+B[i][j];
        }
    }
    //printf for C
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
     

}