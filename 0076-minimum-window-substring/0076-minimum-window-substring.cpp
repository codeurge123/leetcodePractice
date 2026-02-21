class Solution {
public:
    string minWindow(string s, string t) {
        int start = 0;
        int end = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < t.length(); i++) {
            mp[t[i]]++;
        }

        int k = t.length();
        int mini = INT_MAX;
        int idx = -1;

        while (end < s.length()) {
            while (k && end < s.length()) {
                mp[s[end]]--;

                if (mp[s[end]] >= 0)
                    k--;

                end++;
            }

            while (k == 0) {
                if (mini > (end - start)) {
                    mini = end - start;
                    idx = start;
                }

                mp[s[start]]++;
                if (mp[s[start]] > 0)
                    k++;

                start++;
            }
        }

        if (mini == INT_MAX)
            return "";

        return s.substr(idx, mini);
    }
};