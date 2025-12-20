class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int d = k%nums.size();

        vector<int> temp;

        for(int i = nums.size()-d;i<nums.size();i++) {
            temp.push_back(nums[i]);
        }

        for(int i = nums.size()-d-1;i >= 0;i--) {
            nums[i+d] = nums[i];
        }

        for(int i = 0;i<temp.size();i++) {
            nums[i] = temp[i];
        }

    }
};