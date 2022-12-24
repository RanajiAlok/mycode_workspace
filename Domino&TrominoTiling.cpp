class Solution {
public:
    int numTilings(int n) {
        vector<int>v(n+1);
        if(n<=1)
        return 1;
        v[0]=1;
        v[1]=1;
        v[2]=2;
        int mod=1e9+7;
        for(int i=3;i<=n;i++)
        {
            v[i]=(((2*v[i-1]))%mod+(v[i-3]%mod))%mod;
        }
        return v[n];
    }
};
