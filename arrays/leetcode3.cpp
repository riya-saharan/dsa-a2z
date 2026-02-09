//longest subarray without repeating characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
        int len = 0;
        for(int i=0; i<s.size(); i++){
            int hash[256]= {0};
            int longest_substring =0;
        for(int j=i; j<s.size(); j++){
        if(hash[s[j]]==1)
            break;
            hash[s[j]]++;
            longest_substring++;
        }
          len = max(len, longest_substring);
        }   
        return len;
    }
};