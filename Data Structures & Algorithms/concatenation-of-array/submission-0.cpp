class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans=nums;
        for(auto& element: nums){
            ans.push_back(element);
        }

        return ans;
    }
};