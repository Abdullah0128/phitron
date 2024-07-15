/*Problem Statement:

Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

Note: Input will be given by EOF.

Input Format

Input consist of a line S. The line will contain lowercase letters and spaces. It is possible that there are multiple spaces together and the line end with spaces.
Constraints

1 <= |S| <= 10^5
Output Format

Output what Amena will write.
Sample Input 0

monkey
i love flower
Sample Output 0

ekmnoy
eefilloorvw*/

//////////vul ache monkey 3 te jan





#include<bits/stdc++.h>
//#include<iomanip>
using namespace std;
int main(){
//while(EOF){
   char s[100000];
    while(cin.getline(s,100000)){
      //cin.getline(s,100000);
      //cout<<s;
      int len=strlen(s);
      //cout<<len;
      //int temp;
      int n[len];
      for(int i=0;i<len;i++){
        
          n[i]=s[i];
                   
      }
     
     sort(n,n+len);
   for(int i=0;i<len;i++){
      if(n[i]==' '){
        continue;         
      }
      s[i]=n[i];
   }
    /* for(int i=0;i<len;i++){
      s[i]=n[i];
     }*/
     //cout<<char(n)<<endl;
     cout<<s<<endl;
}
    
   return 0;
}