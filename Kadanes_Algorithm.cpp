#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;
void maxSubArray(vector<int> &nums) {
        int sum=0;
        int maxi=INT_MIN;
        for (int i=0;i<nums.size();i++) {
            sum+=nums[i];
            maxi=max(sum,maxi);
            if (sum<0) sum=0;
        }
        cout<< maxi;
    }
int main(){
    vector<int> array={2,3,4,-1,-2,-1,19};
    maxSubArray(array);
return 0;
}