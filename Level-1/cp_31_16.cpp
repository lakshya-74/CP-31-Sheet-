#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mn = INT_MAX;
        for(int i=0;i<n-1;i++){
            mn = min(mn,arr[i+1]-arr[i]);
        }
        if(mn<0) cout<<0<<endl;
        else{
            cout<<(mn/2)+1<<endl;
        }
    }
   return 0;
}