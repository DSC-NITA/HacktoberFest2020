int kthSmallest(int arr[], int n, int k){
//We find the kth smallest element using max heap by removing the hence
//found largest elelment.
//Eg. The array is 4 20 16 10 0 47 & we have to find the 3rd smallest
//element
    priority_queue<int>pq;
    int i;
    for(i=0;i<k;i++)
    {
        //pushing 4 20 16 in maxheap with top 20
        pq.push(arr[i]);
    }
    for(i=k;i<n;i++)
    {
        //now kth element i.e.10<top of max heap pop the top & push 10
        //keep repeating it untill the array exhausts
        //SO WE PROCESS HEAP 3 TIMES REMOVE 2 LARGEST ELEMENTS 20,16
        //& IGNORE 1 LARGEST ELEMENT 47 & HENCEFORTH GET 10
        if(pq.top()>arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
    // Your code here
}
