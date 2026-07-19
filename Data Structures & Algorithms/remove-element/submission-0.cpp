class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sol=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                sol++;
            }
            else{
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return sol;
    }
};