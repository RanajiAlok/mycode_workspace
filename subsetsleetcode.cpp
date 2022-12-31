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

/*Given an integer array nums that may contain duplicates, return all possible
subsets
(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.*/

class Solution {
public:
    void sol(int ind,vector<int>& arr,vector<vector<int>>& ans,vector<int>& ds){
        ans.push_back(ds);

        for(int i=ind;i<arr.size();i++){
            if(i!=ind && arr[i]==arr[i-1])continue;
            ds.push_back(arr[i]);
            sol(i+1,arr,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        sol(0,nums,ans,ds);
        return ans;
    }
};
