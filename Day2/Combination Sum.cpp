class Solution {
public:
     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> res;
        combinationSum(candidates,0,temp,res,target);
        return res;
    }
    void combinationSum(vector<int> in, int idx ,vector<int> op,vector<vector<int>> & res, int target){
           if(target==0){
             res.push_back(op);
               return;
           }else if(target<0)
               return;
        
            for(int i=idx;i<in.size();i++){
                op.push_back(in[i]);
                combinationSum(in,i,op,res,target-in[i]);
                op.pop_back();
            } 
    }
};
