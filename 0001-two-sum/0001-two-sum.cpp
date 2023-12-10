class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> result;
        // for(auto it1 = nums.begin(); it1 != nums.end(); ++it1) {
        //     /* so we have a functon all find in the function and 
        //     the find return the number */
        //     auto it2 = find (it1 + 1, nums.end(), target - *it1);
        //     if(it2 != nums.end()){// this is case where we found the no.
        //         result.push_back(it1 - nums.begin());
        //         result.push_back(it2 - nums.begin());
        //         break;
        //     }
        // }
        // return result;
        unordered_map <int, int> _map;
        for(int i = 0; i < nums.size(); ++i){
            int num = nums[i];
            int complement = target - num;
            auto it = _map.find(complement);
            if(it != _map.end()){ // found
                return {it ->second, i};
            }
            _map[num] = i;
        }
        return {};
    }
};