class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[k]){
                swap(nums[i], nums[k+1]);
                k++;
            }
            
        }
        return k+1;
    }
};