class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> l_tempContainer;
        vector<int> l_result{};
        int l_index = 0, l_minus = 0;
        for(; l_index < nums.size(); ++ l_index)
        {
            l_minus = target - nums[l_index];
            if(l_tempContainer.find(l_minus) != l_tempContainer.end())
            {
                l_result.push_back(l_tempContainer[l_minus]);
                l_result.push_back(l_index);
                break;
            }
            l_tempContainer[nums[l_index]] = l_index;
        }

        return l_result;
    }
};
