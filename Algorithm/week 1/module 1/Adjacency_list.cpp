#include<bits/stdc++.h>
using namespace std;
int main(){
int n,e;
cin>>n>>e;
vector<int>mat[n];
while(e--){
    int a,b;
    cin>>a>>b;
    mat[a].push_back(b);
    mat[b].push_back(a);
}
vector<int> v;
for(int i=0;i<mat[0].size();i++){//mat[0]==0 node er sathe k k connected seta dekhbo.je node er dekte caibo seta likbo 1,2,....
    cout<<mat[0][i]<<" ";
}
return 0;
}