#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   string::iterator it;
   for(it=s.begin();it<s.end();it++){
    cout<<*it<<endl;
   }
   cout<<*s.begin()<<endl;//string er surur value dekhar jonno
    cout<<*(s.end()-1)<<endl;//string er sesh value dekhar jonno
    
   return 0;
}