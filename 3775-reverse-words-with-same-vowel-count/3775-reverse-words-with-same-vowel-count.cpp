class Solution {
public:

    bool countVowel(string word,int firstWordCount) {
        int count = 0;
        for(int i = 0;i<word.length();i++) {
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
                count++;
            }
        }

        if(count == firstWordCount) return true;
        return false;
    } 

    string reverseWords(string s) {
        string firstWord = "";
        string finalans = "";

        int j = 0;
        while(j != s.length() && s[j] != ' ') {
            firstWord += s[j];
            j++;
        }
        j++;

        int firstcount = 0;
        for(int i = 0;i<firstWord.length();i++) {
            if(firstWord[i] == 'a' || firstWord[i] == 'e' || firstWord[i] == 'i' || firstWord[i] == 'o' || firstWord[i] == 'u') {
                firstcount++;
            }
        }

        finalans += firstWord;

        string word = "";
        while(j < s.length()) {
            if(s[j] == ' ' || j == s.length()-1) {
                if(j == s.length()-1) word+=s[j];
                if(countVowel(word,firstcount)) {
                    reverse(word.begin(),word.end());
                }
                finalans += " ";
                finalans += word; 
                word.clear();
            }
            else {
                word += s[j];
            }
            j++;
        }



        return finalans;
        
    }
};