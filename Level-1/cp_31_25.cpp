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
        string s(n,' ');
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int i=0 ,j= n-1;
        int size = n;
        while(i<j){
            if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0')){
                size -= 2;
                i++;
                j--;
            }
            else{
                break;
            }
        }
        cout<<size<<endl;
    }
   return 0;
}