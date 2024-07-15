#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;

};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }
    Student min;//Student max;
     min.marks=INT_MAX;//jodi max ber kori tahole==max.marks=INT_MIN:
     for(int i=0;i<n;i++){
     if(a[i].marks<min.marks){//a[i].marks>max.marks;
        min=a[i];//max=a[i];
     }
     }
     cout<<min.name<<" "<<min.roll<<" "<<min.marks<<endl;
    
   return 0;
}