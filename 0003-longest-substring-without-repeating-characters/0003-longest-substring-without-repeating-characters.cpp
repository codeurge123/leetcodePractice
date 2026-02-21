class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count(256,0);

        int start = 0;
        int end = 0;
        int maxi = INT_MIN;
        int len = 0;
        while(end < s.length()) {
            if(count[s[end]] == 0) {
                len++;
                maxi = max(len,maxi);
                count[s[end]]++;
                end++;
            } 
            else {
                while(start <= end && count[s[end]] != 0) {
                    len--;
                    count[s[start]]--;
                    start++;
                }
            }
        }


        if(maxi == INT_MIN) return 0;

        return maxi;


    }
};