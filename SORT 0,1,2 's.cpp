class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c1=0;int c2=0;int c3=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) c1++;
            else if(nums[i]==1) c2++;
            else c3++;
        }
        
        
        int z = c1-1;
        
        int o = c1+c2-1;
        
        int t = c1+c2+c3-1;
        
        for(int i=0;i<nums.size();i++){
            
            if(i<=z) nums[i] = 0;
            
            if(i>z && i<=o) nums[i] = 1;
            
            
            
            if(i>o && i<=t) nums[i] = 2;
            
            
        }
        
        
        
    }
};
