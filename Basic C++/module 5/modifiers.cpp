#include<bits/stdc++.h>
using namespace std;
int main(){
   string a="hello";
   string b="gello";
   //a=a+b;
    a+=b;//same
   //a.append(b);//same
   cout<<a<<endl;


   //new string add
   string c="hello";
   //c="helloA";// A add krchi  
   c.push_back('A');//same.......
   cout<<c<<endl;


//last theke delete
c.pop_back();
cout<<c<<endl;

//jekono index theke mucshe felar jonno
string d="helloworld";
d.erase(4,3);//4=koto index theke muchbo,,3=koita muchbo
cout<<d<<endl;

//ek joner jaigai r ek jon k replace kora
string p="helloworld";
p.replace(5,3,"so");//5=koto theke delete krbo,3=koita delete krbo,so==sota bosate chai
cout<<p<<endl;
    
   return 0;
}