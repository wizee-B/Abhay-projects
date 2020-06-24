#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>A[i][j];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<A[i][j]<<" ";cout<<endl;
    }
    cout<<endl;
     for(int i=0;i<m;){
        for(int j=0;j<n;j++){
            cout<<A[j][i]<<" ";
            }i++;
        if(i<m){
            for(int j=n-1;j>=0;j--){
            cout<<A[j][i]<<" ";
            }
            i++;
        }
    }

    return 0;
}


