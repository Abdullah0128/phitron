/*8Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).*/
#include<stdio.h>
int main(){
int n,Low=1;
scanf("%d",&n);
int arr[n];
for(int  i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(  int i=0;i<n;i++){
if(arr[i]<=Low){    
Low=arr[i];
printf("%d %d",i+1,Low);
break;
}
else if(arr[i]>Low){

}

}
return 0;

}