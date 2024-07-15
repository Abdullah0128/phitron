/*A ticket is a string consisting of six digits. A ticket is considered lucky if the sum of the first three digits is equal to the sum of the last three digits. Given a ticket, output if it is lucky or not. Note that a ticket can have leading zeroes.

Input
The first line of the input contains an integer t
 (1≤t≤103
) — the number of testcases.

The description of each test consists of one line containing one string consisting of six digits.

Output
Output t
 lines, each of which contains the answer to the corresponding test case. Output "YES" if the given ticket is lucky, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
5
213132
973894
045207
000000
055776
outputCopy
YES
NO
YES
YES
NO
Note
In the first test case, the sum of the first three digits is 2+1+3=6
 and the sum of the last three digits is 1+3+2=6
, they are equal so the answer is "YES".

In the second test case, the sum of the first three digits is 9+7+3=19
 and the sum of the last three digits is 8+9+4=21
, they are not equal so the answer is "NO".

In the third test case, the sum of the first three digits is 0+4+5=9
 and the sum of the last three digits is 2+0+7=9
, they are equal so the answer is "YES".
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int test;
   cin>>test;
   for(int k=0;k<test;k++){

   int n;
   int len=0;
   cin>>n;
   int ar[100];
   int rem,temp=n,sum1=0,sum2=0;
   int i=0;
  while(temp!=0){
    rem=temp%10;
    ar[i]=rem;
    //sum=sum+rem;
    temp=temp/10;    
    i++;
    len=i;
    cout<<len<<endl;
   }
   cout<<"total:"<<len<<endl;
   cout<<len/2<<endl;
   for(int i=0;i<len/2;i++){
      sum1=sum1+ar[i];
   }
   for(int i=len/2;i<len;i++){
      sum2=sum2+ar[i];
   }
   cout<<sum1<<endl;
   cout<<sum2<<endl;
   if(sum2==sum1){
      cout<<"YES"<<endl;
   }
   else{
      cout<<"NO"<<endl;
   }
   }
    
   return 0;
}