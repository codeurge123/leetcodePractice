class Solution {
public:

    int atleast(vector<int> &nums,int k) {
        int s = 0;
        int e = 0;
        int count = 0;
        int finalcount = 0;
        while(e < nums.size()) {
            if(nums[e]%2 != 0) {
                count++;
            } 

            while(count == k) {
                if(nums[s]%2 != 0) {
                    count--;
                }
                finalcount += nums.size()-e;
                s++;
            }

            e++;

        }

        return finalcount;

    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atleast(nums,k)-atleast(nums,k+1);
    }
};