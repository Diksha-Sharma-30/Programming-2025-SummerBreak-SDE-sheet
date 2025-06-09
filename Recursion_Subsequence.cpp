#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    int n=v.size();
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void f(int arr[],int arr_size,int ind,vector<int> v){
    if (ind>=arr_size) {
        print(v);
        return;
    }
    v.push_back(arr[ind]);
    f(arr,arr_size,ind+1,v);
    v.pop_back();
    f(arr,arr_size,ind+1,v);
}
void fk(int arr[],int arr_size,int ind,vector<int> v,int sum,int k){
    if (ind>=arr_size) {
        if (sum==k)print(v);
        return;
    }
    v.push_back(arr[ind]);
    sum+=arr[ind];
    fk(arr,arr_size,ind+1,v,sum,k);
    v.pop_back();
    sum-=arr[ind];
    fk(arr,arr_size,ind+1,v,sum,k);
}
bool f_once(int arr[],int arr_size,int ind,vector<int> v,int sum,int k){
    if (ind>=arr_size) {
        if (sum==k) {
            print(v);
            return true;
        }
        return false;
    }
    
    if (f_once(arr,arr_size,ind+1,v,sum,k)) return true;
    v.push_back(arr[ind]);
    sum+=arr[ind];
    f_once(arr,arr_size,ind+1,v,sum,k);
    v.pop_back();
    sum-=arr[ind];
    f_once(arr,arr_size,ind+1,v,sum,k);
}
int main(){
    int arr[]={1,2,3,1};
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++) cout<<arr[i]<<" ";
    vector<int> v;
    cout<<endl;
    // f(arr,4,0,v);
    // fk(arr,4,0,v,0,3);
    f_once(arr,4,0,v,0,3);
return 0;
}