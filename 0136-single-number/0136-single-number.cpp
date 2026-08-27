class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x0r = 0;
        for(int i=0;i<nums.size();i++){
            x0r ^= nums[i];
        }
        return x0r;
    }
};