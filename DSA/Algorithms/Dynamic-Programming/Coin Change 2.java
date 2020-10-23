// Problem Link :https://practice.geeksforgeeks.org/problems/coin-change2448/1
// This is Coin change problem.
/*
  Statement: 
        Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins. 
        Example :
         Input:
          n = 4 , m = 3
          S[] = {1,2,3}
          Output: 4
*/
// I am giving 3 approaches from brute force to dp solution.

// 1. Brute Force(Recursion) =>TLE
/*
   private long rec(int[] s,int m,int n){
        // base cases.
        //  if we found change way=1;
        if(n==0) return 1;
        // No coins to get change and n>0 so return 0;
        if(m==0) return 0;
        // we cant get change for negative values.
        if(n<0) return 0;
        return rec(s,m,n-s[m-1])+rec(s,m-1,n);

     }

*/

//2. DP(memoization)  => Ac
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
//3. tabular DP => Ac
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
