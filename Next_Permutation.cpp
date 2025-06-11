#include <bits/stdc++.h>
using namespace std;

// this function reverse the required range of vector
vector <int> reverse_Subarray(vector<int> &v,int start,int last){
        int n=last-start+1;
        for (int i=start;i<(start+n/2);i++){
            swap(v[i],v[last-i+start]);
        }
        return v;
    }
int main(){
        vector<int> nums={1,4,2,1,3,9,7,0,0};
        int ind=0;
        int n=nums.size();
        for (int i=n-2;i>=0;i--){
            if (nums[i]<nums[i+1]){
                ind=i+1;
                for (int j=n-1;j>i;j--){
                    if (nums[j]>nums[i]) {
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
                break;
            }
        }

        reverse_Subarray(nums,ind,n-1);
        for (int i=0;i<n;i++) cout<<nums[i]<<" ";
    
return 0;
}