class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> suffix(prices.size());

        int suffixMax = 0;

        for(int i = prices.size()-1;i>=0;i--) {
            if(suffixMax < prices[i]) {
                suffixMax = prices[i];
            }
            suffix[i] = suffixMax;
        }


        int max = INT_MIN;

        for(int i = 0;i<prices.size();i++) {
            if(suffix[i]-prices[i] > max) {
                max = suffix[i]-prices[i];
            }
        }

        return max;

    }
};