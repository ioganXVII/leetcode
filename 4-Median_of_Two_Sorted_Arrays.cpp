double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double result = 0;

        for (int i = 0; i < nums2.size(); i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());

        if (nums1.size() % 2 == 1) {
            
            result = nums1[(nums1.size() / 2)];
        }
        else {
            result = (nums1[(nums1.size() / 2) - 1] + nums1[(nums1.size() / 2)]);
            result/=2;
        }

        return result;
    }
