#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,ans=0;
    int sumofarr=0;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<=m-3;i++){
        for(int j=0;j<=n-3;j++){
            sumofarr=0;
            for(int k=j;k<j+3;k++){
                sumofarr+=matrix[i][k];
                sumofarr+=matrix[i+2][k];
            }
            sumofarr+=matrix[i+1][j+1];
            if(ans<sumofarr){
                ans=sumofarr;
            }
        }
    }
    cout<<ans;
    return 0;
}