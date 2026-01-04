class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());

        int maxi = INT_MIN;
        int count = 1;

        for(int i = 1;i<nums.size();i++) {
            if(nums[i] == nums[i-1]) continue;
            else if(nums[i] == nums[i-1]+1) count++;
            else count = 1;

            maxi = max(maxi,count);
        }

        if(maxi == INT_MIN) return 1;

        return maxi;

    }
};