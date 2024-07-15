#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s[0]<<endl;//jekono index er value dekhar jonno
   cout<<s.at(0)<<endl;//same kaj mane index er valude
   cout<<s.front()<<endl;//same...............

   //last index
   cout<<s[s.size()-1]<<endl;
   //or
   cout<<s.back()<<endl;


    
   return 0;
}