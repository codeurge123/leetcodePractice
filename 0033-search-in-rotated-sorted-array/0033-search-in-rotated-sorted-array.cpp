class Solution {
public:

    int pivotElement(vector<int> &nums) {
        int s = 0;
        int e = nums.size()-1;

        int mid = s + (e-s)/2;

        while(s <= e) {
            if(s == e) return mid;
            if(mid+1 < nums.size() && nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid] < nums[s]) e = mid-1;
            else s = mid+1;

            mid = s + (e-s)/2;
        }

        return -1;

    }

    int search(vector<int>& nums, int target) {

        
        int pivot = pivotElement(nums);


        if(target >= nums[0] && target <= nums[pivot]) {
            int s = 0;
            int e = pivot;

            int mid = s + (e-s)/2;

            while(s <= e) {
                if(nums[mid] == target) return mid;
                else if(nums[mid] > target) e = mid-1;
                else s = mid+1;

                mid= s+(e-s)/2;
            }
            return -1;
        }
        else {
            int s = pivot+1;
            int e = nums.size()-1;

            int mid = s + (e-s)/2;

            while(s <= e) {
                if(nums[mid] == target) return mid;
                 else if(nums[mid] > target) e = mid-1;
                else s = mid+1;

                mid= s+(e-s)/2;
            }
            return -1;
        }

        return -1;

    }
};