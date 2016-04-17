#include <algorithm>
#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        output.reserve(2);
        
        unordered_map<int, int> mymap;
        
        // trying unordered_map to test speed difference
        // unordered_map ran at 22ms, while map ran at 32ms
        // map<int, int> mymap;
         
        // utilizing a map for better perfomance
        for(int i = 0; i < nums.size(); i++) {
            if(mymap.find(target-nums[i]) != mymap.end()) {
                output.push_back(mymap.at(target-nums[i]));
                output.push_back(i);
                break;
            }
            mymap.insert (pair<int,int>(nums[i], i));
        }
        
        return output;
    }
};