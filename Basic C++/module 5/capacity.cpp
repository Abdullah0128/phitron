#include<bits/stdc++.h>
using namespace std;
int main(){
//    string s="hello";
//    cout<<s.size()<<endl;//size dekhar jonno
//    cout<<s.max_size()<<endl;//amar machine maximum koto  length er string nite pare
//    cout<<s.capacity()<<endl;//minimum 15 ta rakbe,dorkal porle arooo besi rakte pare joto iccha
//    string a="gello";
//    a.clear();//string clear kore dibe delete er moto jar karon e length 0 hobe
//    cout<<a.size()<<endl;

//empty()
/*
string s;
if(s.empty()==true){
    cout<<"empty"<<endl;
}
else{
    cout<<"not empty"<<endl;
}
*/



//string resize() with input(without space)
string s;
cin>>s;
//input dici hello_world
/*s.resize(5);//input theke 5ta character rakbe
cout<<s<<endl;*/ 
s.resize(6,'x');//iput er sathe notun character jog krchi
cout<<s<<endl;  


   return 0;
}