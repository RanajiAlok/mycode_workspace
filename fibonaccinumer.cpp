//dynamic approach(top-down)
#include <bits/stdc++.h>
using namespace std;

int fib(int n, int dp[]){
    if(n==0||n==1)
    return n;

    if(dp[n]!=0)
    return dp[n];

    int ans;
    ans=fib(n-1,dp)+fib(n-2,dp);
    return dp[n]=ans;
}
int main(){
    int n;
    cout<<"Enter the number upto 100 for which you want fibonacci number: "<<endl;
    cin>>n;
    int dp[100]={0};
    cout<<fib(n,dp)<<endl;

}
