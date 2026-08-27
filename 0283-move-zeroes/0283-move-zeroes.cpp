class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]==0){
                j++;
            }
            else nums[i++]=nums[j++];
        }
        for(i;i<nums.size();i++){
            nums[i]=0;
        }
    }
};