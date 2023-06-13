 public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        
        int key;
        for (int i = 1; i < n; i++) {
            key = arr[i];
            int j = i - 1;
     
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            
        arr[j + 1] = key;
        
        }
    }
