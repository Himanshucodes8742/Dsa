class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        //for first occurence 
        int first = -1;
        int last = -1;
        while(low<=high&&n!=0){
            int mid =(low+high)/2;
            if(nums[mid]==target){
                if(first==-1){
                    first = mid;
                }
                first=min(mid,first);
                high = mid-1; 
            }
            else if(target<nums[mid]){
                high = mid-1; 
            }
            else{
                low = mid +1;
            }
        }
        low =0;
        high =n-1;
        
        while(low<=high&&n!=0){
            int mid =(low+high)/2;
            if(nums[mid]==target){
                if(last==-1){
                    last=mid;
                }
                last=max(mid,last);
                low = mid+1;
            }
            else if(target<nums[mid]){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }

        return {first, last};

    }
};