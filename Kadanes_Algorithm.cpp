# include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums) {
        int sum=0;
        int maxi=INT_MIN;
        for (int i=0;i<nums.size();i++) {
            sum+=nums[i];
            maxi=max(sum,maxi);
            if (sum<0) sum=0;
        }
        return maxi;
    }
int main(){
    vector<int> array={2,3,4,-1,-2,-1,19};
    cout<<maxSubArray(array);
return 0;
}