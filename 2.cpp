#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++){
            matrix[i][j]+=matrix[i][j-1];
        }
    }

    for(int j=0;j<n;j++){
        for(int i=1;i<m;i++){
            matrix[i][j]+=matrix[i-1][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}