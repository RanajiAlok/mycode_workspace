/*You are given an array AAA of size NNN. In one operation, you can:

    Choose an index iii (1≤i≤N)(1\le i \le N)(1≤i≤N) and increase AiA_iAi​ by 111.

Find the minimum number of operations required to convert the array AAA into a permutation of size NNN. If it is impossible to do so, print −1-1−1.

Note that a permutation of size NNN contains each element from 111 to NNN exactly once.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int visited[n]={0};
	    int sum=0;int count=1;
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        if(a[i]>i+1){
	            count=-1;
	            break;
	        }
	        sum+=a[i];
	    }
	    if(count==-1)
	    cout<<"-1"<<endl;
	    else
	    cout<<n*(n+1)/2-sum<<endl;
	    
	}
	return 0;
}
