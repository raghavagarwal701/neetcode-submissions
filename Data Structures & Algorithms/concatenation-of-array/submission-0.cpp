class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> out = nums;
        for(int i = 0; i<nums.size(); ++i){
            out.push_back(nums[i]);
        }
        return out;
    }
};