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
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]<0){
                arr[n-1] += abs(arr[i]);
            }
            else{
                arr[n-1] -= arr[i];
            }
        }
        cout<<arr[n-1]<<endl;
    }
   return 0;
}