class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        
        // Using Boyer–Moore majority vote algorithm
      
        int target_elem=0;
        int count=0;
        
        for(int i=0;i<size;i++)
        {
            if(count==0)
                target_elem=a[i];
            if(target_elem==a[i])
                count++;
            else
                count--;
        }
        
        int count2=0;
        
        for(int i=0;i<size;i++)
        {
            if(target_elem==a[i])
                count2++;
            if(count2>size/2)
                return target_elem;
        }
        
        return -1;
    }
};
