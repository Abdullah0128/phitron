#include<stdio.h>
int main(){
    int N,i,a,Even=0, Odd=0,Positive=0,Negative=0;
        scanf("%d",&N); 
    for(i=1;i<=N;i++){
        scanf("%d",&a);
        if(a%2==0){
            Even++;
      }
      else{//if(i%2==1)
        Odd++;
      }
      if(a>0){
        Positive++;
      }
      else if (a<0){
        Negative++;
      }
                      
   
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",Even,Odd,Positive,Negative);
    return 0;
}