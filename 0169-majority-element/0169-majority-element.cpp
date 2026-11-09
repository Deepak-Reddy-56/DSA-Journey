class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(count==0){
                ele = nums[i];
            }

            if(ele == nums[i]){
                count++;
            }
            else{
                count--;
            }

            if(count > nums.size()/2)
            return ele;
        }
        return ele;
    }
};