
#include<bits/stdc++.h>
using namespace std;
class Student1
{
    public:
    int id,marks;
    char name[100],sec;
};
class Student2
{
    public:
    int id,marks;
    char name[100],sec;
};
class Student3
{
    public:
    int id,marks;
    char name[100],sec;
};
int main()
{
    int T;
    cin>>T;

    for (int i = 1; i <=T; i++)
    {
        
    
    
    Student1 a;
    cin>>a.id>>a.name>>a.sec>>a.marks;
    Student2 b;
    cin>>b.id>>b.name>>b.sec>>b.marks;
    Student3 c;
    cin>>c.id>>c.name>>c.sec>>c.marks;


    if(a.marks>=b.marks && a.marks>=c.marks)
    {
        if(a.marks==b.marks)
        {
            if(a.id<b.id)
            {
                cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
            }
            else
            {
                cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.marks<<endl;
            }
        }
        else if(a.marks == c.marks)
        {
            if(a.id<c.id)
            {
                cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
            }
            else
            {
                cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.marks<<endl;
            }
        }
        else
        {
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
        }
        
    }
    else if(b.marks>=a.marks && b.marks>=c.marks)
    {
        if(b.marks==a.marks)
        {
            if(b.marks<a.marks)
            {
                cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.marks<<endl;
            }
            else
            {
                cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
            }
        }
        else if(b.marks==c.marks)
        {
            if(b.id<c.id)
            {
                cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.marks<<endl;
            }
            else
            {
                cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.marks<<endl;
            }
        }
        else
        {
            cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.marks<<endl;
        }
            
    }
    else if(c.marks>=a.marks && c.marks>=b.marks)
    {
        if(c.marks==a.marks)
        {
            if(c.id<a.id)
            {
                cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.marks<<endl;
            }
            else
            {
                cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
            }
        }
        else if(c.marks==b.marks)
        {
            if(c.id<b.id)
            {
                cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.marks<<endl;
            }
            else
            {
                cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.marks<<endl;
            }
        }
        else
        {
            cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.marks<<endl;
        }
    }
    
    }

return 0;
}