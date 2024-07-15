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
    //Student* a=new Student[n];//dynamic array declear korar jonno
     for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
     }
     /*
     jodi space soho name nite  chai
     for(int i=0;i<n;i++){
        cin.ignore();             //entr er space ignore korbe
        getline(cin,a[i].name);
        cin>>a[i].roll>>cin>>a[i].marks;
     }
     //mathai rakthe hobe j space soho name input nile roll,marks porer line e input nite hobe enter die
     */
   
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
   return 0;
}