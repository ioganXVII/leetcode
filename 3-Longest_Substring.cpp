class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        
        int max_length = 0;
        
        unordered_set<char> max_string;
        
        int f_counter = 0;
        int s_counter = 0;
        
        while(f_counter < s.length() && s_counter < s.length()){
            if(max_string.find(s[s_counter]) == max_string.end()) {
                max_string.insert(s[s_counter++]);
                max_length = max(max_length, s_counter - f_counter);
            }
            else{
                max_string.erase(s[f_counter++]);
            }
        }
        
        
        
        
        return max_length;
    }
};
