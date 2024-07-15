#include<stdio.h>
int main(){
    float discount,after_dis,real_prize;
    scanf("%f %f",&discount,&after_dis);
    real_prize=(after_dis/(1-(discount/100)));
    printf("%.2f",real_prize);
    return 0;
}