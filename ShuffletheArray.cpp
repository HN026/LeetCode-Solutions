class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>nums1;
        vector<int>nums2;
        for(int i = 0; i<n; i++)
        {
            nums1.push_back(nums[i]);
        }
        for(int i = 0; i<n;i++)
        {
            nums2.push_back(nums[i+n]);
        }
        vector<int>nums3;
        for(int i = 0; i<n;i++)
        {
            nums3.push_back(nums1[i]);
            nums3.push_back(nums2[i]);
        }
        
        return nums3;
    }
};