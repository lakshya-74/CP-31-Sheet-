#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        for(int i=1;i<n-1;i++){
            if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
                count =2;
                break;
            }
        }
        if(count!=0){
            cout<<count<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='.') count++;
            }
            cout<<count;
            cout<<endl;
        }
    }
   return 0;
}