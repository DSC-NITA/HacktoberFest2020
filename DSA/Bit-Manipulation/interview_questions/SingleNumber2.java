//Problem Statement:
/*
  Given a non-empty array of integers, every element appears three times except for one, which appears exactly once. Find that single one.
*/

    public int singleNumber(int[] nums) {
        int ans=0;
        // we maintain an array to store occurences of 1's at each bit position
        int[] bit=new int[32];
        for(int i=0;i<32;i++){
            for(int e:nums){
                if((e&(1<<i))!=0) bit[i]=(bit[i]+1)%3;//Add them into bit array.
            }
        }
        for(int i=0;i<32;i++){
            if(bit[i]>0){
                ans+=(1<<i); // Get ans from the bit array.
            }
        }
        return ans;
    }
