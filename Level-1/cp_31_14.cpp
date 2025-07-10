#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b) cout<<"First\n";
            else cout<<"Second\n";
        }
        else{
            a += 1;
            if(a>b) cout<<"First\n";
            else cout<<"Second\n";
        }
    }
   return 0;
}