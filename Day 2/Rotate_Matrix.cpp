#include <bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> &v){
    int n=v.size();
    int m=v[0].size();

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (i==j) break;
            swap(v[i][j],v[j][i]);
        }
    }
}

void print(vector<vector<int>> v){
    int n=v.size();
    int m=v[0].size();
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}
void Reverse(vector <vector<int>> &v){
    int n=v.size();
    // int m=v[0].size();
    for (int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
        // for (int j=0;j<m/2;j++){
        //     swap(v[i][j],v[i][m-1-j]);
        // }
    }
}
int main(){
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    transpose(v);
    Reverse(v);
    print (v);
    return 0;
}