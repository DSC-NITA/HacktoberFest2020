    private static void quicksort(int[] arr,int start,int end){

    	if(start>=end) return;

    	int pivot=arr[start];

    	int left=start+1,right=end;

    	while(left<=right){

    		if(arr[left]>pivot && arr[right]<pivot){

    			swap(arr,left,right);

    		}
  
  		if(arr[left]<=pivot){

    			left++;

    		}

    		if(arr[right]>=pivot){

    			right--;

    		}

    	}

    	swap(arr,start,right);

    	quicksort(arr,start,right);

    	quicksort(arr,right+1,end);

    }
    
private static void swap(int[] arr,int i,int j){

    	int temp=arr[i];

        arr[i]=arr[j];

        arr[j]=temp;

    }