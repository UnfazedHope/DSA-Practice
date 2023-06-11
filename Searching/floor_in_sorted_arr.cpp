class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        
        long long fl = floor(x);
        long long maxVal = -99999;
        long long maxIdx = -99999;
        
        for(long long i=0;i<n;i++){
            if(v[i]<=x){
                maxVal = max(maxVal, v[i]);
                maxIdx = i;
            }
        }
        
        if(maxVal == -99999)
            return -1;
        else
            return maxIdx; 
    }
};
