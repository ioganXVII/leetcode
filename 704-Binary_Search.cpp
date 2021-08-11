int search(vector<int>& nums, int target) {
        int left_corner = 0;
        int right_corner = nums.size() - 1;
        
        while(left_corner <= right_corner){
            int middle = left_corner + (right_corner - left_corner) / 2;
            
            if(nums[middle] == target){
                return middle;
            }
            else if(nums[middle] > target){
                right_corner = middle - 1;
            }
            else left_corner = middle + 1;            
        }
        
        return -1;
    }
