#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,size,test;
   cin>>test;
   for(int p=0;p<test;p++){
   cin>>n>>size;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int flag=0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<=n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==size){
                flag=1;
                
            }

        }
    }
   }
   if(flag==0){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }
   }
    
   return 0;
}