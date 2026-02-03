class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        int s = 0, e = n - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            // handle edge cases
            if (mid == 0) {
                if (nums[0] != nums[1]) return nums[0];
                s = mid + 1;
                continue;
            }
            if (mid == n - 1) {
                if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
                e = mid - 1;
                continue;
            }

            // if mid itself is the answer
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // mid pairs with left
            if (nums[mid] == nums[mid - 1]) {
                if ((mid - 1) % 2 == 0)
                    s = mid + 1;
                else
                    e = mid - 1;
            }
            // mid pairs with right
            else {
                if (mid % 2 == 0)
                    s = mid + 1;
                else
                    e = mid - 1;
            }
        }

        return nums[s];
    }
};
