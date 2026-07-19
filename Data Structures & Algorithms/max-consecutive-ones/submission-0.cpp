class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=nums.size();

        int sol=0;
        int currentRecord=0;
        int max=0;

        for(int i=0;i<size;i++){

            if(nums[i]==0){
                currentRecord=0;
            }else{
                currentRecord++;
            }
            if(currentRecord>max){
                max=currentRecord;
            }
        }

        sol=max;
        return sol;
    }
};