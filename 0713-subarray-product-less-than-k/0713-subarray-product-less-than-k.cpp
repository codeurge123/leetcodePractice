class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        long long count = 0;

        long long product = 1;
        
        while(end < nums.size()) {
            product *= nums[end];

            while(start <= end && product >= k) {
                product /= nums[start];
                start++;
            }

            count += end-start+1;
            end++;

        }

        return count;


    }
};