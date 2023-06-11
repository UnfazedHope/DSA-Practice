class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       
      // Using Binary Search
        int low=0;
        int high=N-1;
        
        while(low<=high){
            int mid = low + ((high - low) / 2);
            
            if(arr[mid] == K){
                return 1;
            }
            
            if(K>arr[mid]){
                low=mid+1;
            }
            
            if(K<arr[mid]){
                high = mid-1;
            }
        }
        
        return -1;
       
    }
};
