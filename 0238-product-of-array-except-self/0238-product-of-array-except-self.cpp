class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefixProduct;
        int prefix = 1;
        for (int i = 0; i < nums.size(); i++) {
            prefix *= nums[i];
            prefixProduct.push_back(prefix);
        }

        vector<int> suffixProd(nums.size());
        int suffix = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            suffix *= nums[i];
            suffixProd[i] = suffix;
        }

        vector<int> finalans;
        for (int i = 0; i < nums.size(); i++) {
            int val1 = 1;
            int val2 = 1;
            if (i > 0) {
                val1 = prefixProduct[i - 1];
            }
            if (i < nums.size() - 1) {
                val2 = suffixProd[i + 1];
            }
            finalans.push_back(val1 * val2);
        }

        return finalans;
    }
};