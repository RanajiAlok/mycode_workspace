#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMaximumGeneratedArray(int n) {
        if(n==0||n==1)
            return n;
        
        int nums[n+1];
        nums[0]=0;
        nums[1]=1;
        int maxim=1;
        for(int i=2;i<=n;i++){
            if(i%2)
                nums[i]=nums[i/2]+nums[i/2 +1];
            else
                nums[i]=nums[i/2];
            
            maxim=max(maxim,nums[i]);
        }
        return maxim;
    }
};

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    Solution s1;
    
    cout<<s1.getMaximumGeneratedArray(n)<<endl;
    return 0;
}
