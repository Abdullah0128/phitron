#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa){
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
        
    }
    
};
Student fun(){
    Student rahim(12,4,4.56);
    return rahim;


}
/*Student *fun(){
    Student *rahim=new Student(12,4,4.56);
    return rahim;


}*/
int main(){
    // Student *ans=fun();
   Student ans=fun();
   cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa<<endl;
    //delete ans;
   return 0;
}

//dynamic object with function
/*Student *fun(){
    Student rahim(12,4,4.56);
    Student *p=&rahim;
    return p;


}
int main(){
   Student *ans=fun();
   cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;
    
   return 0;
}*/

