class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int breaking_point=-1;
        for(int j=n-2; j>=0;j--){
            if(nums[j]<nums[j+1]){
                breaking_point=j;
                break;
            }
        }

        if(breaking_point==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=breaking_point;i--){
            if(nums[i]>nums[breaking_point]){
                swap(nums[i],nums[breaking_point]);
                break;
            }
        }

        reverse(nums.begin()+breaking_point+1, nums.end());
    }
};