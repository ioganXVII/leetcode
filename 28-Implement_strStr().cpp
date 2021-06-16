// Using KMP Algorithm for Pattern Search : https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/


class Solution {
public: 
    int strStr(string haystack, string needle) {
        int hay_len = haystack.size();  
        int ndle_len = needle.size();   
        
        if(!ndle_len) return 0;        
        
        
        vector<int> lps = kmpProcess(needle);
        
        
        for(int index_hay = 0, index_ndle = 0;index_hay < hay_len;){  
            if(haystack[index_hay] == needle[index_ndle]){             
                index_hay++;                                           
                index_ndle++;                                          
            }
            
            if(index_ndle == ndle_len){                                
                return index_hay - index_ndle;                         
            }
            
            if(index_hay < hay_len && haystack[index_hay] != needle[index_ndle]){ 
                index_ndle ? index_ndle = lps[index_ndle - 1] : index_hay++;
            }
        }   
        return -1;
    }
    
    
    private:
        vector<int> kmpProcess(string needle){
            int n = needle.size();
            vector<int> lps (n, 0);
            for(int i = 1, len = 0; i < n;){
                if(needle[i] == needle[len]){ 
                    lps[i++] = ++len;
                }
                else if(len) {
                    len = lps[len - 1];
                }
                else {
                    lps[i++] = 0;                
                }
            }            
            return lps;
        }
};
