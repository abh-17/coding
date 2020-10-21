
// every index should be matched with value ....here since started with 0 ... index should be matched with value index+1
//negitive no no can be ignored
//basically index 1shou;d have 1 ,2 should have to 2 ....so on....
//in code since started from  index0 ->should have 1 ...and so on.. 
   

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
        for(int i=0;i<nums.size();i++)
        {
            if( nums[i]!= i+1 )
            {return i+1;}
        }
        
    }
};
