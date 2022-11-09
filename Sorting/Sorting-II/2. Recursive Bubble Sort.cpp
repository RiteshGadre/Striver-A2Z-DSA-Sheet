
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
       if(n==1) return;
       for(int i=0; i<n-1; i++){
           int j= i+1;
           if(arr[i]>arr[j]){
               arr[i]^= arr[j];
               arr[j]^= arr[i];
               arr[i]^= arr[j];
           }
       }
       bubbleSort(arr, n-1);
    }
};
