int numDup(int arr[], int start, int size, int element) {
    int dup = 0;
    if(start < 0)
    {
        return 0;
    }
    
    if(start==element)
    {
        ++dup;
    }
    

    return (dup+numDup(arr, start-1, size, element));
}