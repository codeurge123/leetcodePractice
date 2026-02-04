class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int s = INT_MIN;
        int e = 0;

        int ans = -1;

        if(k > nums.size()) return ans;

        for(int i = 0;i<nums.size();i++) {
            s = max(s,nums[i]);
            e += nums[i];
        }

        while(s <= e) {
            int mid = s + (e-s)/2;

            int minsum = 0;
            int split = 1;
            for(int i = 0;i<nums.size();i++) {
                minsum += nums[i];
                if(minsum > mid) {
                    split++;
                    minsum = nums[i];
                }
            }


            if(split <= k) {
                ans = mid;
                e = mid-1;
            }
            else {
                s = mid+1;
            }


        }

        return ans;


    }
};