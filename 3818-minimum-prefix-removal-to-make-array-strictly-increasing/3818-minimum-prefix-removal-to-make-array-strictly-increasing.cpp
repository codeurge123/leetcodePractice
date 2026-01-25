class Solution {
public:

    bool checkForArray(vector<int> &nums) {
        for(int i = 1;i<nums.size();i++) {
            if(nums[i-1] >= nums[i]) return false;
        }
        return true;
    }

    int minimumPrefixLength(vector<int>& nums) {

        if(checkForArray(nums)) return 0;

        int idx = -1;
        for(int i = 0;i<nums.size()-1;i++) {
            if(nums[i] >= nums[i+1]) idx = i+1;
            
        }

        return idx;

    }
};