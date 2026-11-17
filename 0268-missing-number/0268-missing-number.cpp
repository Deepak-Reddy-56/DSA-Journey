class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int cursum = 0, actsum = 0;
        for(int i=0; i<nums.size(); i++){
            cursum += nums[i];
            actsum += (i+1);
        }
        return (actsum - cursum);
        
    }
};