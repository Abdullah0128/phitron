/*Given a string S
. Print number of words in it.

Word : consists of lowercase and uppercase English letters.

Input
Only one line contains S
 (1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces and ('!', '.', '?' and ',') symbols.

Output
Print the number of words in the given string.

Examples
inputCopy
Meep Meep!
outputCopy
2
inputCopy
I tot I taw a putty tat.
outputCopy
7
inputCopy
I did! I did! I did taw a putty tat.
outputCopy
10
inputCopy
Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...
outputCopy
9*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   int count=0;
   bool word=false;
   getline(cin,s);
   for(char c:s){
      if(isalpha(c)){
      if(word==false){
       count++;
   }
   word=true;
      }
      else{
         word=false;
      }
   }
   cout<<count<<endl;
    
   return 0;
}