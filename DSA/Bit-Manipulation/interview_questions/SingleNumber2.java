 public int singleNumber(int[] nums) {
        int ans=0;
        int[] bit=new int[32];
        for(int i=0;i<32;i++){
            for(int e:nums){
                if((e&(1<<i))!=0) bit[i]=(bit[i]+1)%3;
            }
        }
        for(int i=0;i<32;i++){
            if(bit[i]>0){
                ans+=(1<<i);
            }
        }
        return ans;
    }