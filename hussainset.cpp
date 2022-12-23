#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	int n,m;
	cin>>n>>m;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    queue<ll> q;
    int end_p=n-1;
    int count=0;
    sort(arr,arr+n);
    while(m--){
        int curr_m;
        cin>>curr_m;
        ll ans=0;
        for(;count<curr_m;count++){
            if(end_p>=0 && (q.empty() || arr[end_p]>=q.front())){
                ans=arr[end_p];
                end_p--;
            }
            else{
                ans=q.front();
                q.pop();
            }
            q.push(ans/2);
        }
        cout<<ans<<endl;
    }
	return 0;
}
