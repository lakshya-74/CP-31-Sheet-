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
        int i=0 ,j=0;
        int mxsize = INT_MIN;
        int size =0;
        while(j<n){
            if(arr[j]==1){
                if(j!=0 && arr[i]!=0){
                    size = j-i-1;
                }
                else if(arr[i]==0) size = j-i;
                mxsize = max(mxsize,size); 
                i = j;
            }
            j++;
        }
        if(n==1 && arr[0]==0){
            size =1;
        }
        else if(j!=0 && arr[i]!=0){
            size = j-i-1;
        }
        else if(arr[i]==0) size = j-i;
        mxsize = max(mxsize,size);
        cout<<mxsize<<endl;
    }
   return 0;
}