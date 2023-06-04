// The below code is not optimized, this is just a brute-force approach to reach the solution

class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        
        int max_val=0;
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(A[i]<=A[j] && i<=j){
                    max_val = max(j-i, max_val);
                }
            }
        }
        
        return max_val;
    }
};

// Optimized Solution :-

// Working on it!
