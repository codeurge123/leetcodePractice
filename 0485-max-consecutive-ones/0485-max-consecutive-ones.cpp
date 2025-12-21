class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start = 0;
        int end = 0;
        int maxi = INT_MIN;
        while(end < nums.size()) {
            while(end < nums.size() && nums[end] != 0) {
                end++;
            }

            maxi = max(maxi,end-start);

            while(end < nums.size() && nums[end] == 0) {
                end++;
            }
            start = end;


        }

        return maxi;

    }
};