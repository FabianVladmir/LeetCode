class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;
        int i = INT_MAX;
        int j = INT_MAX;
        for(int it=0; it<n; it++){
            
            if(nums[it] <= i)
                i = nums[it];
            else if(nums[it] <= j)
                j = nums[it];
            else
                return true;
            
        }
        return false;
    }
};