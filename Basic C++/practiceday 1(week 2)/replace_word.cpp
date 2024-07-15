#include<bits/stdc++.h>
using namespace std;
int main(){
   char s[1000];
   cin>>s;
   int len=strlen(s);
   for(int i=0;i<len;i++){
    if(s[i]=='E'&&s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T'){
      s[i]+s[i+1]+s[i+2]+s[i+3]+s[i+4]=" ";
        
    }
   }
   cout<<s;
   
    
   return 0;
}