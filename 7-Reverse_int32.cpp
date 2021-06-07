int reverse(int x) {
        if(x == INT_MIN) return 0;
        if(x < 0) return -reverse(-x);
        
        int reversed = 0;
        while(x != 0){
            if(reversed > INT_MAX / 10 || 10 * reversed > INT_MAX - x % 10) return 0;
            reversed = reversed * 10 + x % 10;
            x = x / 10;
            
            
        }
        
        return reversed;
    }
