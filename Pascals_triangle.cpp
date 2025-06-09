#include <bits/stdc++.h>
using namespace std;
vector<int> generateRow(int n){
    //this code genrates the required row of the pascals triangle that  you want
    vector<int> row(n);
    row[0]=1;
    int res=1;
    n=n-1;
    for (int i=0;i<n;i++){
        res*=(n-i);
        res/=(1+i);
        row[i+1]=res;
    }
    return row;
}

//this function will generate the nCr value------when row and column is given

int nCr(int n,int r){
    int res=1;
    for (int i=1;i<=r;i++){
        res*=n-i+1;
        res/=i;

    }
    return res;
}

//this function will generate the entire pascals triangle



int main(){
    int row;
    cin>>row;

    vector<int> Row=generateRow(row);
    for (int i = 0; i < row; i++) cout<<Row[i]<<" ";

    int ans=nCr(5-1,3-1);
    cout<<"\n"<<ans<<endl;
    
    
return 0;
}