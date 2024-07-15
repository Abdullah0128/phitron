#include<stdio.h>
int  main(){
    double x=5.56;
    double * ptr=&x;
    *ptr=10.20;
    printf("x er value -%.2lf\n",x);
    printf(" x er value -%.2lf\n",*ptr);
    return 0;
}