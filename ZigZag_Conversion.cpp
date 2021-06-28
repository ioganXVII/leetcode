string convert(string s, int numRows) {
        if(numRows == 1) return s;
        
        string result;
        int s_len = s.length();
        int cycle_Len = 2 * numRows - 2;
        
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j + i < s_len; j += cycle_Len){
                result += s[j + i];
                
                if(i != 0 && i != numRows - 1 && j + cycle_Len - i < s_len) 
                    result += s[j + cycle_Len - i]; 
            }
        }        
        
        return result;
    }
