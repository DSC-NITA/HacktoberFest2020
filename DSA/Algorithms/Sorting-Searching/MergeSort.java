    

    private static void mergesort(int[] arr,int start,int end){

    	if(start>=end) return;

    	int mid=start+(end-start)/2;

    	mergesort(arr,start,mid);

    	mergesort(arr,mid+1,end);

    	merge(arr,start,mid,end);

    }

    private static void merge(int[] arr,int start,int mid,int end){

    	int[] temp=new int[end-start+1];

    	int left=start,right=mid+1,tempptr=0;

    	while(left<=mid && right<=end){

    		if(arr[left]<=arr[right]){

    			temp[tempptr++]=arr[left++];

    		}else{

    			temp[tempptr++]=arr[right++];

    		}

    	}
 
   	while(left<=mid){

    		temp[tempptr++]=arr[left++];

    	}

    	while(right<=end){

    		temp[tempptr++]=arr[right++];

    	}

    	tempptr=0;

    	for(int k=start;k<=end;k++){

    		arr[k]=temp[tempptr++];

    	}

    }





