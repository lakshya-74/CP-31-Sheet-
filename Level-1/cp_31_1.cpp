#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool flag = true;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k>=2){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]) flag = false;
            }
            if(!flag) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}