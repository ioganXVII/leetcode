string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
    
        string prefix = "";
        
        
        
        for(int i = 0;i<strs[0].size(); i++){
            int s = 1;
            for( ;s < strs.size() && strs[s].size()>i; s++){
                if(strs[s][i] != strs[0][i]) return prefix;
            }
            if(s == strs.size())prefix+=strs[0][i];
        }
        
        
        
        
        return prefix;
    }
