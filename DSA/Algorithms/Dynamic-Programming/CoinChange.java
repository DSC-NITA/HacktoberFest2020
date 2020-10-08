/*
   private long rec(int[] s,int m,int n){

        if(n==0) return 1;

        if(m==0) return 0;

        if(n<0) return 0;

        return rec(s,m,n-s[m-1])+rec(s,m-1,n);

     }

*/

/*
    private long rec(int[] s,int m,int n,long[][] dp){
 
       if(n==0) return 1;

        if(m==0) return 0;

        if(n<0) return 0;

        if(dp[m][n]>0) return dp[m][n];

        dp[m][n]=rec(s,m,n-s[m-1],dp)+rec(s,m-1,n,dp);
 
       return dp[m][n];

    }
*/

    public long count(int S[], int m, int n) 
    { 

       long[][] dp=new long[m+1][n+1];

       dp[0][0]=1;

       for(int i=1;i<=m;i++){

           dp[i][0]=1;

       }

       for(int i=1;i<=m;i++){

           for(int j=1;j<=n;j++){
 
              dp[i][j]=dp[i-1][j];

               if(j-S[i-1]>=0) dp[i][j]+=dp[i][j-S[i-1]];

           }

       }

       return dp[m][n];

    }
*/ 