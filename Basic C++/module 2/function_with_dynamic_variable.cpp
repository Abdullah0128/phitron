#include<iostream>
using namespace std;
int *fun(){
    int *a=new int;
    *a=100;
    cout<<*a<<endl;
    int **p=&a;//pointer er pointer rakhar jonno ** use kora hoi
    return *p;
}
int main(){
   int *p=fun();
   cout<<"main: "<<p<<endl;

    return 0;
}