#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES\n";
            int i=0;
            cout<<n<<endl;
            while(i<n){
                cout<<1<<" ";
                i++;
            }
            cout<<endl;
        }
        else{
            if(k==1 || (k==2 && n%2==1)) cout<<"NO\n";
            else{
                cout<<"YES\n";
                cout<<n/2<<endl;
                if(n%2==0){
                    for(int i=0;i<n/2;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                else{
                    for(int i=0;i<(n/2)-1;i++){
                        cout<<2<<" ";
                    }
                    cout<<3;
                    cout<<endl;
                }
            }
        }
        
    }
   return 0;
}