class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expectedSum = 0;
        for(int i = 0;i<=nums.size();i++) {
            expectedSum += i;
        }

        int actualSum = 0;
        for(int i = 0;i<nums.size();i++) {
            actualSum += nums[i];
        }

        return expectedSum-actualSum;


    }
};