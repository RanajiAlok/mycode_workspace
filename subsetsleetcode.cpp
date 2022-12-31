class Solution {
public:
    void output(vector<int>& arr,vector<vector<int>>& ans,int index,vector<int>& ds){
        ans.push_back(ds);
        for(int i=index;i<arr.size();i++){
            ds.push_back(arr[i]);
            output(arr,ans,i+1,ds);
            ds.pop_back();
        }
        return;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        output(nums,ans,0,ds);
        return ans;
    }
};
