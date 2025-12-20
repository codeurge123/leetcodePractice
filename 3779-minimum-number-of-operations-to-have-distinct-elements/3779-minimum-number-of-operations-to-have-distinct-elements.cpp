class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i = 0;i<nums.size();i++) {
            freq[nums[i]]++;
        }

        int duplicates = 0;

        for(auto i : freq) {
            if(i.second >= 2) duplicates++;
        }

        int ops = 0;
        int i = 0;

        while(duplicates > 0 && i < nums.size()) {

            ops++;
        for(int k = 0;k < 3 && i < nums.size();k++,i++) {

            int val = nums[i];
            if(freq[val] > 1) {
                freq[val]--;
                if(freq[val] == 1) duplicates--;
            } 
            else {
                freq[val]--;
            }


        }
        }
        return ops;

    }
};