class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int maxi = INT_MIN;
	    int ans = -1;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>maxi){
	            maxi  = arr[i];
	        }
	    }
	     
	    for(int i=0;i<n;i++){
	        if(arr[i]>ans && arr[i]!=maxi){
	            ans  = arr[i];
	        }
	    }
	    if(ans==-1) return ans; 
	    return ans;
	 
	 //T.C--> O(2N)
	 //S.C-->O(1);
	}
};
