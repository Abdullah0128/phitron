#include<bits/stdc++.h>
using namespace std;
int main(){
   int  n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   //after sort(asscending)
   cout<<endl;
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   //after sort(desscending)
   cout<<endl;
   sort(arr,arr+n,greater<int>());
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
    
   return 0;
}