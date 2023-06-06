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

class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        
        vector<int>v;
        
        v.push_back(0);

        int maxdiff=INT_MIN;

        for(int i=1;i<N;i++)
        {
            int n=v.size();
            
            if(A[v[n-1]]>A[i]){
                v.push_back(i);
            }
            else{
                for(int j=n-1;j>=0;j--){
                 
                    if(A[v[j]]<=A[i]){
                        maxdiff=max(maxdiff,(i-v[j]));
                    }
                    else{
                        break;
                    }
                }
            }
        }

        if(maxdiff==INT_MIN)
            return 0;

        return maxdiff;
        
    }
};
