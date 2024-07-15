/*Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
Example
inputCopy
5 10
outputCopy
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5*/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
   long long int num1,num2;
     cin>>num1>>num2;
    long long int sum=num1+num2;
    long long int mul=num1*num2;
    long long int sub=num1-num2;
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
     cout<<num1<<" * "<<num2<<" = "<<mul<<endl;
      cout<<num1<<" - "<<num2<<" = "<<sub<<endl;

}