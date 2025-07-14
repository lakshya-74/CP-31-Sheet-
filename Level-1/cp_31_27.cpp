#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int counttwo = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==2) counttwo++;
        }
        if(counttwo%2==1) cout<<-1<<endl;
        else{
            int idx = -1;
            int leftcount =0;
            for(int i=0;i<n;i++){
                if(arr[i]==2) leftcount++;
                if(leftcount==(counttwo/2)){
                    idx = i+1;
                    break;
                }
            }
            cout<<idx<<endl;
        }
    }
    return 0;
}
