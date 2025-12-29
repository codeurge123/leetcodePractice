class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> finalans;
        sort(nums.begin(),nums.end());   // always remember this because yha par hum two pointer approach laga rh hai

        for(int i = 0;i<nums.size();i++) {
            int left = i+1;
            int right = nums.size()-1;

            int target = -(nums[i]);

            if(i > 0 && nums[i] == nums[i-1]) continue;

            while(left < right) 
            {
                if(nums[left] + nums[right] == target) {
                    vector<int> ans;

                    ans.push_back(nums[i]);
                    ans.push_back(nums[left]);
                    ans.push_back(nums[right]);

                    finalans.push_back(ans);

                    while(left < nums.size()-1 && nums[left] == nums[left+1]) left++;
                    while(right  > i && nums[right] == nums[right-1]) right--;


                    left++;
                    right--;

                }
                else if(nums[left] + nums[right] > target) {
                    right--;
                }
                else left++;
            }

      }
        return finalans;
    }
};