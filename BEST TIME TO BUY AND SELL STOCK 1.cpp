class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        
        int mini = p[0];
        int maxi = 0;
        
        for(int i=1;i<p.size();i++){
            
            if(p[i]-mini<0){
                mini = min(p[i],mini);
                continue;
            } 
            else{
                
                maxi = max(maxi,p[i]-mini);
            }
            
        }
        
        return maxi;
        
    }
};

 // T.C-->O(N)
 // S.C-->O(1)  
