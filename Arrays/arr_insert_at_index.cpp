class Solution{
  public:
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        //Your code here
        
        // Don't use i++ approach -> it leads to overwriting values like inserting new element 90 in original array 1 2 3 4 5 at idx 2, then o/p will be 1 2 90 3 3 3
      
        for(int i=sizeOfArray-1;i>=index;i--){
            arr[i] = arr[i-1];
        }
        
        arr[index] = element;
        
    }
};
