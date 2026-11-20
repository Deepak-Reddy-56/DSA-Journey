class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int num = abs(nums[i]);
            if(nums[num-1] > 0){
                nums[num-1] = -nums[num-1];
            }
            else
                return num;
        }
        return -1;
    }
};