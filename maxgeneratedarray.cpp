#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getmaximumGeneratedArray(int n){
            int *nums=new int(n);
            nums[0]=0;
            nums[1]=1;
            for(int i=0;i<=n;i++){
                nums[2*i]=nums[i];
                nums[2*i+1]=nums[i]+nums[i+1];
            }
            
          /* for(int i=0;i<=n;i++){
               cout<<nums[i]<<"  ";
            }*/
            int max=nums[n];
            for(int i=n;i>0;i--){
                if(max<nums[n-1])
                max=nums[n-1];
            }
            
            return max;
    }
};

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    Solution s1;
    
    cout<<s1.getmaximumGeneratedArray(n)<<endl;
    return 0;
}
