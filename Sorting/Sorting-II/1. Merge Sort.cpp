{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int ans[r+1];
         int i=l;
         int j= m+1;
         int k= l;
         while(i<=m && j<=r){
             if(arr[i]<arr[j]) ans[k++]= arr[i++];
             else ans[k++]= arr[j++];
         }
         
         while(i<=m) ans[k++]= arr[i++];
         while(j<=r) ans[k++]= arr[j++];
         
         for(int i=l; i<r+1; i++) arr[i]= ans[i];
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
       if(l<r){
           int mid= (l+r)/2;
           mergeSort(arr, l, mid);
           mergeSort(arr, mid+1, r);
           merge(arr, l, mid, r);
       }
        
    }
};
