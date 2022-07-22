class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int N = nums.size();
        for ( int i = 0; i<N-1; i++)
        {
            
        
           for( int j =i+ 1; j<N; j++)
            {
              if (nums[i] + nums[j] == target)
              {
                  v.push_back(i);
                  v.push_back(j);
                  break;
              }
                
            }
            
            
        } 
        
        return v;
    }
};