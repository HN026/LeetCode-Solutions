class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        int sum =0;
        for(int i = 0; i<candies.size(); i++)
        {
            sum = candies[i] + extraCandies;
            int count = 0;
            for(int j = 0; j<candies.size(); j++)
            {
                if(sum>=candies[j])
                {
                  if(i!=j)
                  {
                      count++;
                  }
                }
            }
            
            if(count==candies.size()-1)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
            
        }
        return result;
    }
};