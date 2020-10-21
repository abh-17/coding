class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
        {
            int n=nums.size();
            
            while( nums[i]>=1 && nums[i]<=n && nums[i] != nums[ nums[i] -1 ] )  
            {
                swap(nums[i],nums[nums[i]-1]);
            }
            
        }
        
        
    }
};
