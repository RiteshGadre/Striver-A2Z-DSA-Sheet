class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i= nums.size()-2, l;
        while(i>=0){
            if(nums[i]<nums[i+1]) break;
            i--;
        }
        
        if(i<0) reverse(nums.begin(), nums.end());
        else {
    	    for (l = nums.size() - 1; l > i; l--) {
                if (nums[l] > nums[i]) {
                    break;
                }
            } 
    	    swap(nums[i], nums[l]);
    	    reverse(nums.begin() + i + 1, nums.end());
        }
        
    }
};
