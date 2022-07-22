class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        for ( int j = 0; j<nums.size(); j++)
        {
            if(nums[j]==target)
            {
                i = j;
                break;
            }
            else
            {
                continue;
            }
        }
        if(i!=0)
        {
            return i;
        }
        else
        {
            nums.push_back(target);
            int z;
            sort(nums.begin(), nums.end());
            for( int k = 0; k<nums.size(); k++)
            {
                if(nums[k]==target)
                {
                    z = k;
                    break;
                }
                else{
                    continue;
                }
            }
            return z;
        }
    }
};