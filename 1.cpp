#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,sum=0,maxsum=0,ans;
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            sum=sum+matrix[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}