class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        for(int i = 0;i<s.length();i++) {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
                temp += tolower(s[i]);
            }
        }


        int i = 0;
        int j = temp.size()-1;
        cout<<temp;
        while(i <= j) {
            if(temp[i] != temp[j]) return false;
            else i++; j--;
        }

        return true;

    }
};