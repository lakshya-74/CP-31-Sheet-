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
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int one = 0;
        int mone =0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) one++;
            else mone++;
        }
        if(one>=mone && mone%2==0) cout<<0<<endl;
        else if(one==0) cout<<n<<endl;
        else{
            if(mone%2==0){
                
            }
        }
    }
   return 0;
}