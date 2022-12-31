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
