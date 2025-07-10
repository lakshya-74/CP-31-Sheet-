#include<iostream>
#include<vector>
#include<string>
using namespace std;
const int score[10][10] = 
    {{1,1,1,1,1,1,1,1,1,1},
     {1,2,2,2,2,2,2,2,2,1},
     {1,2,3,3,3,3,3,3,2,1},
     {1,2,3,4,4,4,4,3,2,1},
     {1,2,3,4,5,5,4,3,2,1},
     {1,2,3,4,5,5,4,3,2,1},
     {1,2,3,4,4,4,4,3,2,1},
     {1,2,3,3,3,3,3,3,2,1},
     {1,2,2,2,2,2,2,2,2,1},
     {1,1,1,1,1,1,1,1,1,1}};

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<string>> arr(10,vector<string>(10));
        for(int i=0;i<10;i++){
            string s;
            cin>>s;
            for(int j=0;j<10;j++){
                arr[i][j] = s[j];
            }
        }
        int totalScore = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(arr[i][j] == "X"){
                    totalScore += score[i][j];
                }
            }
        }
        cout<<totalScore<<endl;
    }
   return 0;
}