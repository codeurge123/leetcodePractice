class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i = 0;
        while(i < nums.size()-1) {
            if(nums[i] < nums[i+1]) {
                i++;
            }
            else break;
        }

        if(i == 0) return false;
        else if(i == nums.size()-1) return false;

        while(i < nums.size()-1) {
            if(nums[i] > nums[i+1]) i++;
            else break;
        }

        if(i == nums.size()-1) return false;

        while(i < nums.size()-1) {
            if(nums[i] < nums[i+1]) i++;
            else return false;
        }

        if(i == nums.size()-1) return true;
        return false;

    }
};