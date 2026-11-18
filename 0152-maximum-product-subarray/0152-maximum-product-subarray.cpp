class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        return nums[0];

        int suffix = 1, prefix = 1, maxi = INT_MIN;
        for(int i=0; i<n; i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;

            prefix *= nums[i];
            suffix *= nums[n - i - 1];
            maxi = max( maxi, max(prefix, suffix));
        }

        return maxi;
    }
};