class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;

        int firstOcc = -1;

        while(s <= e) {
            if(nums[mid] == target) {
                firstOcc = mid;
                e = mid - 1;
            }
            else if(nums[mid] > target) {
                e = mid -1;
            }
            else {
                s = mid+1;
            }
            mid = s + (e-s)/2;
        } 

        ans.push_back(firstOcc);

        if(firstOcc == -1) return {-1,-1};

        int i = 0;
        int j = nums.size()-1;
        int middle = i + (j-i)/2;

        int lastOcc = -1;
        while( i <= j) {
            if(nums[middle] == target) {
                lastOcc = middle;
                i = middle+1;
            }
            else if(nums[middle] < target) {
                i = middle+1;
            }
            else {
                j = middle-1;
            }
            middle = i + (j-i)/2;
        }

        ans.push_back(lastOcc);

        return ans;





    }
};