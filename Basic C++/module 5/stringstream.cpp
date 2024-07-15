#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   getline(cin,s);//input=i love my country very much
   stringstream ss(s);//ekti sentence theke word gula ber kore anbe
   string word;
   while(ss>>word){
    cout<<word<<endl;
   }
    
   return 0;
}