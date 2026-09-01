class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int key ;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(count==0){
                key = nums[i];
            }
            if(nums[i]==key){
                count++;
            }
            else{
                count--;
            }
        }
        return key;
    }
};