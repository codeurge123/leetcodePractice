class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> count(256,0);

        int st = 0;
        int e = 0;
        int len = 0;
        int maxi = INT_MIN;
        while(e < s.length()) {
            if(count[s[e]] == 0) {
                count[s[e]]++;
                len++;
                maxi = max(maxi,len);
                e++;
            }
            else {
                
                while(count[s[e]] != 0) {
                    count[s[st]]--;
                    st++;
                    len--;
                }
 
            }

        }

        if(maxi == INT_MIN) return 0;

        return maxi;

    }
};