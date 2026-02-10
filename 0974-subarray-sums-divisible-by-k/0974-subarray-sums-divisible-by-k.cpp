class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int prefixSum = 0;

        unordered_map<int,int> mp;
        mp[0] = 1;
        int count = 0;

        for(int i = 0;i<nums.size();i++) {
            prefixSum += nums[i];

            int val = prefixSum % k;
            if(val < 0) {
                val += k;
            }
            if(mp[val] == 0) {
                mp[val]++;
            }
            else {
                count += mp[val];
                mp[val]++;
            }

        }

        return count;


    }
};