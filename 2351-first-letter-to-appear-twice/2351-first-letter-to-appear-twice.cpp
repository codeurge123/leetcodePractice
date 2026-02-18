class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp;
        char ans;
        for(int i = 0;i<s.length();i++) {
            if(mp[s[i]] == 0) {
                mp[s[i]]++;
            }
            else {
                ans =  s[i];
                break;
            }
        }

        return ans;


    }
};