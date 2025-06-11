#include <bits/stdc++.h>
using namespace std;
void Sort(vector<int> &v){
    int l,m,h;
    l=0,m=0,h=v.size()-1;
    while(m<=h){
        if (v[m]==0){
            swap(v[m],v[l]);
            l++;
            m++;
        }
        else if (v[m]==1){
            m++;
        }
        else{
            swap(v[m],v[h]);
            h--;
        }
    }
}
int main(){
    vector<int> nums={2,0,0,1,0,2,1};
    Sort(nums);
    for (int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
return 0;
}