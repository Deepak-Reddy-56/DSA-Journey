class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        if(nums.size() == 1)
        return nums;

        vector<int> ans;
        if(nums.size() == 2){
            if(nums[0] == nums[1]){
                ans.push_back(nums[0]);
            }
            else{
                ans.push_back(nums[0]);
                ans.push_back(nums[1]);
            }

            return ans;
        }
        unordered_map<int, int> mp;
        int count = floor(nums.size()/3) + 1;
        for(int i=0;i <nums.size();i++){
            mp[nums[i]]++;

            if(mp[nums[i]] == count){
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
    }
};