class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++) {
            mp[nums[i]]++;
        }

        unordered_map<int,int> mp1;

        for(auto i : mp) {
            mp1[i.second]++;
        }

        for(int i = 0;i<nums.size();i++) {
            if(mp1[mp[nums[i]]] == 1) {
                return nums[i];
            }
        }
        return -1;
    }
};