class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        return 0;

        int maxcount = 0, ele = nums[0];
        unordered_set<int> ans;
        int count = 1;
        for(int i=0; i<nums.size(); i++){
            ans.insert(nums[i]);
        }

        for(auto i : ans){
            ele = i;
            count = 1;
            if(ans.find(ele-1)==ans.end()){
                while(ans.find(ele + 1)!=ans.end()){
                    ele++;
                    count++;
            }
        }
            maxcount = max(maxcount, count);
        }

        return maxcount;
    }
};