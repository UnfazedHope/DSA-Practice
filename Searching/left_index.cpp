int leftIndex(int N, int arr[], int X){
    
    // Your code here
    
    for(int i=0;i<N;i++){
        if(arr[i] == X){
            return i;
        }
    }
    
    return -1;
}

Alt Method :- Use Binary Search Algorithm
