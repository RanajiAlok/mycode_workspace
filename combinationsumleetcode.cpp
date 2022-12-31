class Solution {
public:
    void result(int index, int target,vector<int> arr,vector<vector<int>>& solution,vector<int>& required_combination){
        if(index==arr.size()){
            if(target==0){
                solution.push_back(required_combination);
            }
            return;
        }

        if(arr[index]<=target){
            required_combination.push_back(arr[index]);
            result(index,target-arr[index],arr,solution,required_combination);
            required_combination.pop_back();
        }

        result(index+1,target,arr,solution,required_combination);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> solution;
        vector<int> required_combination;
        result(0,target,candidates,solution,required_combination);
        return solution;
    }
};

//combinationsum- II leetcode(no duplicates)

class Solution {
public:
    void resultcombination(int ind, int target,vector<int>& arr, vector<vector<int>>& sol, vector<int>& ds){
        if(target==0){
            sol.push_back(ds);
            return;
        }
        for(int i=ind; i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            resultcombination(i+1,target-arr[i],arr,sol,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> sol;
        vector<int> ds;
        resultcombination(0,target,candidates,sol,ds);
        return sol;
    }
};
