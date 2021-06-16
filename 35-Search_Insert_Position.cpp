// Algorithm complexity - O(log n)

int searchInsert(vector<int>& nums, int target) {
        int left_corner = 0;
        int right_corner = nums.size() - 1;
        
        while(left_corner <= right_corner){
            int middle = left_corner + (right_corner - left_corner)/2;
            if(nums[middle] < target){
                left_corner = middle+1;
            }
            else right_corner = middle-1;
            
        }

        return left_corner;
    }
