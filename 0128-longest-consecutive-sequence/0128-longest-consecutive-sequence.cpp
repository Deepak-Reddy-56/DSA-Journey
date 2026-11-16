class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 0, maxcount = 0, ele = INT_MIN;
        unordered_set<int> ans;
        for(int i=0; i<nums.size();i++){
            ans.insert(nums[i]);
        }

        for(auto i : ans){
            count = 1;
            ele = i;
            if(ans.find(ele-1)==ans.end()){
                while(ans.find(ele+1)!=ans.end()){
                    count++;
                    ele = ele+1;
                }
            }
            maxcount = max(maxcount, count);
        }
        return maxcount;
    }
};