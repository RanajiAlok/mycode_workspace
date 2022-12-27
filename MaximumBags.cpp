class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> v;
        int n=capacity.size();
        for(int i=0;i<n;i++){
            v.push_back(capacity[i]-rocks[i]);
        }
        sort(v.begin(),v.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(v[i]!=0){
                int diff=v[i];
                if(additionalRocks>=diff){
                    additionalRocks-=diff;
                    v[i]=v[i]-diff;
                }
            }
            if(v[i]==0){
                count++;
            }
        }
        return count;
    }
};

