class Solution {
public:
int countPrimes(int n) {

   int dp[n+1];
    memset(dp,0,sizeof dp);
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(dp[i]==0)
        {
            for(int j=i;j<n;j=j+i)
            {
                dp[j]=1;
            }
            count++;
        }
    }
    return count;
}
};


