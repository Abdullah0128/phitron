#include<bits/stdc++.h>
//#include<iomanip>
using namespace std;
int main(){
//while(EOF){
   char s[100000];
    while(cin.getline(s,100000)){
      //cin.getline(s,100000);
      //cout<<s;
      int len=strlen(s);
      //cout<<len;
      //int temp;
      //int n[len];
      sort(s,s+len);
      
     //sort(n,n+len);
   for(int i=0;i<len;i++){
      if(s[i]==' '){
        continue;         
      }
      else{
      cout<<s[i];
      }
   }
    /* for(int i=0;i<len;i++){
      s[i]=n[i];
     }*/
     //cout<<char(n)<<endl;
     cout<<endl;
}
    
   return 0;
}