#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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
        vector<int> brr;
        vector<int> crr;
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            mx = max(mx,arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=mx) brr.push_back(arr[i]);
            else crr.push_back(arr[i]);
        }
        if(brr.size()==0) cout<<-1<<endl;
        else{
            cout<<brr.size()<<" "<<crr.size()<<endl;
            for(int i=0;i<brr.size();i++){
                cout<<brr[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<crr.size();i++){
                cout<<crr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}