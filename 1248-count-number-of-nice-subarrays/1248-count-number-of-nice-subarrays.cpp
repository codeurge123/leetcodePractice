class Solution {
public:
    int atleast(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        long long count = 0;

        long long total = 0;

        while (end < nums.size()) {
            if (nums[end] % 2 != 0) {
                count++;
            }
            while (count == k) {
                if (nums[start] % 2 != 0)
                    count--;
                start++;
                total += nums.size() - end;
            }

            end++;
        }

        return total;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atleast(nums,k)-atleast(nums,k+1);
    }
};