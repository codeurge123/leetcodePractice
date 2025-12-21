class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = NULL;

        for(int i =0;i<nums.size();i++) {
            if(count == 0) {
                element = nums[i];
                count++;
            }
            else if(element == nums[i]) {
                count++;
            }
            else if(element != nums[i]) {
                count--;
            }
        }

        return element;


    }
};