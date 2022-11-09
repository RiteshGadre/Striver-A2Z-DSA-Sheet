{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        
        if(n==1) return;
        insertionSort(arr, n-1);
        int curr= arr[n-1];
        int i= n-2;
        while(curr<=arr[i] && i>=0){
            arr[i+1]= arr[i--];
        }
        arr[i+1]= curr;
        // for(int i=1; i<n; i++){
        //     int curr= arr[i];
        //     int j= i-1;
        //     while(j>=0 && arr[j]>curr){
        //         arr[j+1]= arr[j];
        //         j--;
        //     }
        //     arr[j+1]= curr;
        // }
        
        
    }
};
