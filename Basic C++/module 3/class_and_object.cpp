#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double cgpa;
    char name[100];    
};
int main(){
    Student a;
    a.roll=101;
    a.cgpa=3.50;
    char temp[100]="rakib";
    strcpy(a.name,temp);
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;
    
    
    /*if take an input 
    cin>>a.name>>a.roll>>a.cgpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;*/

    /*if take with space of a string(abdullah al hassan)
    cin.getline(a.name,100);
    cout<<a.name;*/  
   return 0;
}