#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool check(string x , string s){
    int n = x.size();
    int m = s.size();
    if(n<m) return false;
    for(int i=0;i<n-m+1;i++){
        if(x.substr(i,m)== s) return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x0;
        cin>>x0;
        string s;
        cin>>s;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4; //max 5 operation possible for any string
        int ans = -1;
        if(check(x0 , s)){
            ans = 0;
        }
        else if(check(x1 , s)){
            ans = 1;
        }
        else if(check(x2 , s)){
            ans = 2;
        }
        else if(check(x3 , s)){
            ans = 3;
        }
        else if(check(x4 , s)){
            ans = 4;
        }
        else if(check(x5 , s)){
            ans = 5;
        } 
        cout<<ans<<endl;
    }
   return 0;
}