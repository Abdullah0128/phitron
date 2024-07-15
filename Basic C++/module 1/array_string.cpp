#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    /*string input
    #include<string.h>
    char s[100];
    cin>>s;
    cout<<strlen(s)<<endl;


    string input with space
    #include<string.h>
    #include<string>
    char s[100];
    fgets(s,100,stdin);
    //cin.getline(s,100);
    cout<<strlen(s)<<endl;

    */
    
}