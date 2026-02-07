class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefixSum = 0;
        int count = 0;
        unordered_map<int,int> mp;

        mp[0] = 1;

        for(int i = 0;i<nums.size();i++) {
            prefixSum += nums[i];

            if(mp[prefixSum-goal] == 0) {
                mp[prefixSum]++;
            }
            else {
                count += mp[prefixSum-goal];
                mp[prefixSum]++;
            }

        }

        return count;

    }
};