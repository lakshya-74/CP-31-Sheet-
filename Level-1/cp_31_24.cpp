#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
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
        int total_xor = 0;
        for(int i=0;i<n;i++){
            total_xor ^= arr[i];
        }
        if(n%2==1) cout<<total_xor<<endl;
        else{
            if(total_xor==0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
    }
   return 0;
}