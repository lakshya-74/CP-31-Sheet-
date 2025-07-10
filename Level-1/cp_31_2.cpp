#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mx =0;
        for(int i=0;i<n-1;i++){
            int count = arr[i+1] - arr[i];
            mx = max(mx,count);
        }
        int fl = x - arr[n-1];
        mx = max(mx,2*fl);
        int il = arr[0];
        mx = max(mx,il);
        cout<<mx<<endl;
    }
}