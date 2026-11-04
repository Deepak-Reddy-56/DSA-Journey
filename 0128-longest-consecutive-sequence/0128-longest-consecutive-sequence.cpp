class Solution {
public:
    bool searchset(unordered_set<int>& ans, int ele){
        if(ans.find(ele)!=ans.end())
        return true;

        return false;
    }
    
    int longestConsecutive(vector<int>& nums) {
        int count = 1, maxcount = 0;
        unordered_set<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.insert(nums[i]);
        }
        for(auto i:ans){
            int ele = i;
            count = 1;
            if(!searchset(ans,ele-1)){
                while(searchset(ans, ele+1)){
                    ele = ele+1;
                    count++;
                }
            }
            maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};  