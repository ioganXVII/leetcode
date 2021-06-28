string longestPalindrome(string s) {
        if(s.length() < 2) return s;
        
        int max_len = 0;
        int start_index  = 0;
        int i = 0;
        
        while(i < s.length()){
            int l_ptr = i;
            int r_ptr = i;
            
            while(r_ptr < s.length()-1 && s[r_ptr] == s[r_ptr+1]) r_ptr++;
            
            i = r_ptr+1;
            
            while(r_ptr < s.length()-1 && l_ptr > 0 && s[r_ptr + 1] == s[l_ptr - 1]){
                r_ptr++;
                l_ptr--;
            }
            
            int new_len = r_ptr - l_ptr + 1;
            if(new_len > max_len){
                start_index = l_ptr;
                max_len = new_len;
            }            
        }
             
        return s.substr(start_index, max_len);
    }
