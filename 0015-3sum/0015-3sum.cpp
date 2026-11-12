class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0, j = 1,k=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
           
            j = i + 1;
            k = nums.size() - 1;
            while(j < k){

                if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }

                else if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }
                else{
                     vector<int> temp  = {nums[i], nums[j], nums[k]};
                     ans.push_back(temp);

                    j++;
                    k--;
                    while(j<k && nums[j-1]==nums[j]) j++;
                    while(j<k && nums[k+1]==nums[k]) k--;

                }
            }
        }
        return ans;
    }
};