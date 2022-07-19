class Solution {
public:
    int longestPalindrome(string s) {
        std::map<char, int> charMap;
        bool singleFlag = false;
        int result = 0;
        for(int i = 0; i < s.length(); i++) {
            if(charMap.find(s[i]) == charMap.end()) {
                charMap[s[i]] = 1;
            } else {
                charMap[s[i]] += 1;
            }
        }
        
        std::map<char, int>::iterator it = charMap.begin();
        for(it = charMap.begin(); it != charMap.end(); ++it) {
            if(it->second % 2 == 1) {
                singleFlag = true;
            }
            result += it->second / 2; 
        }
        return singleFlag? result*2+1: result*2;
    }
};