
#include<stdio.h>
int  main(){
   int arr[5]={10,20,30,40,50};
   printf("0th index er address-%p\n",&arr[0]);
   printf("0th index er address-%p\n",arr); //ager ta  r ei ta same bcz arr ekta pionter
    printf("0th index er address-%d\n",arr[0]);
     printf("0th index er address-%d\n",*arr);
     printf("1 index er value=%d\n",arr[1]);
     printf("1 index er value=%d\n",*(arr+1));//*(1+arr) likha jai
     printf("1 index er value=%d\n",1[arr]);// ekoti kotha
     
   
       return 0;
}