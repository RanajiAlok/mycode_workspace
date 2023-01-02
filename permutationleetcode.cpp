class Solution {
public:
    void permutation(vector<int>& ds,vector<vector<int>>& ans,vector<int>& nums,int arr[]){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!arr[i]){
                ds.push_back(nums[i]);
                arr[i]=1;
                permutation(ds,ans,nums,arr);
                arr[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int arr[nums.size()];
        for(int i=0;i<nums.size();i++){arr[i]=0;}
        permutation(ds,ans,nums,arr);
        return ans;
    }
};
