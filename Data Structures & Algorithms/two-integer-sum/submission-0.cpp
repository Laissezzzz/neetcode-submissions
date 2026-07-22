class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int min=0,max=0;
        vector<int> sol;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    if(i != j){
                        if(i>j){
                            min=j;
                            max=i;
                        }else{
                            min=i;
                            max=j;
                        }
                    }
                }
            }
        }
        sol.push_back(min);
        sol.push_back(max);
        return sol;
    }
};
