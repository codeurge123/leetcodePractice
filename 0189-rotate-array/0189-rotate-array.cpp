class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        // This is done because ans ka random index par value insert ho ge from nums array.
        for(int i = 0;i<nums.size();i++) {
            int index = (i+k)%nums.size();
            ans[index] = nums[i];
        }
        // nums.clear();
        // Nums ke andr change karna hao kue naya array nhi bana
        nums = ans;
    }
};