class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
        if(n==0 || n==1){
            return;
        }
        
        int left = 0;
        int right = 0;
        int temp;
        while(right<n){
            if(arr[right]==0){
                ++right;
            }
            else{
                swap(arr[left],arr[right]);
                ++left;
                ++right;
            }
        }
