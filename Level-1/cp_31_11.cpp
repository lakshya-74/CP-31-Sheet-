#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minvalue = INT_MAX;
    for(int i=0;i<n;i++){
        arr[i] = abs(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            minvalue = 0;
            break;
        }
        else if(arr[i]<minvalue){
            minvalue = arr[i];
        } 
    }
    cout<<minvalue;
}