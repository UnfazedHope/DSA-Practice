1st method :-
 
 public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        
        for (int i = 1; i < n; i++) {
            int j = i;
            int temp=0;
            
            while (j > 0 && arr[j-1] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j = j - 1;
            }
        }
    }

2nd method :- 

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
