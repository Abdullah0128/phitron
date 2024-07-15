#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
};
int main(){
   int n;
   cin>>n;
   student ar[n];
   for(int i=0;i<n;i++){
    cin.ignore();
    getline(cin,ar[i].name);
    cin>>ar[i].roll>>ar[i].marks;
   }
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n;j++){
        if(ar[i].marks>ar[j].marks){//boro theke choto hole ar[i]<ar[j];
            swap(ar[i],ar[j]);
        }
    }

   }
   for(int i=0;i<n;i++){
    cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
   }
    
   return 0;
}